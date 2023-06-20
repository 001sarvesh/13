// Write a program in C to calculate the power of any number using recursion

#include <stdio.h>

double calculate_power(double base, int exponent) {
    if (exponent == 0) {
        return 1;  // Base case: when exponent becomes 0, return 1
    } else {
        return base * calculate_power(base, exponent - 1);  // Recursive call with exponent-1
    }
}

int main() {
    double base = 2.5;
    int exponent = 3;
    double result = calculate_power(base, exponent);
    printf("%.2lf raised to the power of %d = %.2lf\n", base, exponent, result);
    return 0;
}
