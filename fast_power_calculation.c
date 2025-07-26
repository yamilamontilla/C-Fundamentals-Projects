#include <stdio.h>

// Recursive function to efficiently calculate the power
double power(double base, int exponent) {
    double result = 1.0; // Initially the result is 1 (b^0 = 1)
    double multiplier = base; // Stores the powers of base as multipliers

    while (exponent > 0) {
        // If the exponent has a 1 in the least significant bit, multiply by the current power
        if (exponent % 2 == 1) {
            result *= multiplier;
        }
        // Square the base (using the previously declared multiplier)
        multiplier *= multiplier;

        // Divide the exponent by 2 (moving to the next bit)
        exponent /= 2;
    }

    return result;
}

int main() {
    double b; // Base of the power
    int n;    // Exponent of the power

    // Read input values
    scanf("%lf %d", &b, &n);

    // Calculate the power
    double result = power(b, n);

    // Print the result with 3 decimal places
    printf("%.3f\n", result);

    return 0;
}
