// Write a program in C to count the digits of a given number using recursion

#include <stdio.h>

int count_digits(int n) {
    if (n == 0) {
        return 0;  // Base case: when n becomes 0, return 0
    } else {
        return 1 + count_digits(n / 10);  // Recursive call with n/10
    }
}

int main() {
    int number = 12345;
    int digitCount = count_digits(number);
    printf("Number of digits in %d: %d\n", number, digitCount);
    return 0;
}
