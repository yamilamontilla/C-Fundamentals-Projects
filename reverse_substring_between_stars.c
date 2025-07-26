#include <stdio.h>
#include <string.h>
int main() {
    char string[51];  // I declare that the string will only have 50 characters + the null terminator '\0'
    char result[51];  // String for the final result
    int position1 = -1, position2 = -1;

    // Request the input string and read it, specifying that a maximum of 50 characters can be entered
    printf("Enter a string (50 characters maximum): ");
    scanf("%50s", string);

    // Search for the positions of the two '*' characters
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '*') {
            if (position1 == -1) {
                position1 = i;  // First '*'
            } else {
                position2 = i;  // Second '*'
                break;          // End the search
            }
        }
    }

    // Validate that exactly two '*' characters have been found and no more or less
    if (position1 == -1 || position2 == -1) {
        printf("Error: The required two, and only two, '*' characters were not entered.\n");
        return 1;
    }

    // Copy the characters before the first '*', after verifying the necessary requirements
    int j = 0;
    for (int i = 0; i <= position1; i++) {
        result[j++] = string[i];
    }

    // Reverse the characters between the two '*' and add them to the result
    for (int i = position2 - 1; i > position1; i--) {
        result[j++] = string[i];  // Add each character in reverse order
    }

    // Copy the characters after the second '*'
    for (int i = position2; string[i] != '\0'; i++) {
        result[j++] = string[i];
    }

    result[j] = '\0';  // Make sure the string ends correctly

    // Print the result
    printf(result);

    return 0;
}
