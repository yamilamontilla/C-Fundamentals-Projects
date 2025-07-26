#include <stdio.h>

int main() {
    int a, x;
    int result = 0;
    int position = 1;

    // Request a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &a);

    // Request a digit
    printf("Enter a number: ");
    scanf("%d", &x);

    // Insert the digit x inside the number a
    int digit_a;
    int digit_x = 0;

    // Analyze the digits inside the number a
    while (a > 0 || digit_x == 0) {
        // Find the least significant digit of a
        digit_a = a % 10;
        a /= 10;

        // Insert x in the correct position inside a
        if (!digit_x && x < digit_a) {
            result += x * position;
            position *= 10;
            digit_x = 1;
        }

        // Add digit_a inside the sequence a into the result
        result += digit_a * position;
        position *= 10;
    }

    // If x hasn't been inserted, it means it is greater or equal than all the digits
    if (!digit_x) {
        result += x * position;
    }

    // Convert the result to a number ordered from smallest to largest
    int ordered = 0;
    int frequency[10] = {0};

    // Count the frequency of each digit to build the result
    while (result > 0) {
        frequency[result % 10]++;
        result /= 10;
    }

    // Construct the ordered number
    for (int i = 9; i >= 0; i--) {
        while (frequency[i] > 0) {
            ordered = ordered * 10 + i;
            frequency[i]--;
        }
    }

    // Print the ordered result
    printf("%d\n", ordered);

    return 0;
}
