#include <stdio.h>

// Sort an array
void sort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    // Create an array to store the elements
    int array[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array using bubble sort
    sort(array, n);

    // Print the sorted elements
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
