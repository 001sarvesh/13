// . Write a recursive function to calculate factorial of a given number
#include <stdio.h>

unsigned long long calculate_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 and 1 is 1
    } else {
        return n * calculate_factorial(n - 1);  // Recursive call with n-1
    }
}

int main() {
    int number = 5;
    unsigned long long factorial = calculate_factorial(number);
    printf("Factorial of %d: %llu\n", number, factorial);
    return 0;
}
