#include <stdio.h>

// Function declarations
int find_ordered(int array[], int low, int high, int x) {
    // If elements are not in the required order, return -1
    if (low > high) {
        return -1;
    }

    // Calculate the middle element
    int mid = low + (high - low) / 2;

    // Check if x is at the middle position
    if (array[mid] == x) {
        return mid;
    }

    // If x is less than the middle element, search in the lower half
    if (x < array[mid]) {
        return find_ordered(array, low, mid - 1, x);
    }

    // If x is greater than the middle element, search in the upper half
    return find_ordered(array, mid + 1, high, x);
}

int main() {
    int n, x;

    // Read the size of the array
    scanf("%d", &n);

    // Declare the array dynamically
    int array[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Read the value to search for
    scanf("%d", &x);

    // Call the function and print the result
    int result = find_ordered(array, 0, n - 1, x);

    printf("%d\n", result);

    return 0;
}
