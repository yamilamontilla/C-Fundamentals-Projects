#include <stdio.h>

// Recursive function to efficiently calculate the power
double power(double base, int exponent) {
    // Base case: any number raised to the power 0 is 1
    if (exponent == 0) {
        return 1.0;
    }

    // Recursive case: divide the problem in halves
    double half = power(base, exponent / 2);

    // If the exponent is even
    if (exponent % 2 == 0) {
        return half * half;
    }
    // If the exponent is odd
    else {
        return base * half * half;
    }
}

int main() {
    double b; // Base of the power
    int n;    // Exponent of the power

    // Read the input values
    scanf("%lf %d", &b, &n);

    // Calculate the power
    double result = power(b, n);

    // Print the result with 3 decimal places
    printf("%.3f\n", result);

    return 0;
}
