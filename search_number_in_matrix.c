#include <stdio.h>

int main() {
    int m, n, x;

    // Ask for the dimensions m and n
    printf("Enter the dimensions m and n (separated by a space): ");
    scanf("%d %d", &m, &n);  // Read m and n correctly

    // Create a matrix of the given size
    int matrix[m][n];

    // Read the elements of the matrix
    printf("Enter the elements of the matrix (%d rows, %d columns):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);  // Read each element of the matrix
        }
    }

    // Ask for the number to search for
    printf("Enter the number to search for: ");
    scanf("%d", &x);  // Read the number to search for

    // Search for the specified number in the matrix
    int found = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == x) {
                printf("%d %d\n", i + 1, j + 1);  // Print row and column, remembering they start at 1
                found = 1;
                break;
            }
        }
        if (found) break;  // If already found, exit the loop
    }

    // If not found, print the following message and -1
    if (!found) {
        printf("The number is not in the matrix.\n");
        printf("-1\n");
    }

    return 0;
}
