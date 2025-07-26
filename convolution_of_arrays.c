#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Number of elements in arrays u and v

    // Read n
    scanf("%d", &n);

    // Allocate dynamic memory for arrays u, v, and w
    int *u = (int *)malloc(n * sizeof(int));
    int *v = (int *)malloc(n * sizeof(int));
    int *w = (int *)malloc((2 * n - 1) * sizeof(int));

    // Read the elements of array u
    for (int i = 0; i < n; i++) {
        scanf("%d", &u[i]);
    }

    // Read the elements of array v
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Initialize array w with zeros
    for (int i = 0; i < 2 * n - 1; i++) {
        w[i] = 0;
    }

    // Calculate the convolution
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            w[i + j] += u[i] * v[j];
        }
    }

    // Print the array w
    for (int i = 0; i < 2 * n - 1; i++) {
        printf("%d", w[i]);
        if (i < 2 * n - 2) {
            printf(" ");
        }
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(u);
    free(v);
    free(w);

    return 0;
}
