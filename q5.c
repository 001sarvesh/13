// Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n) {
    if (n < 0) {
        n = abs(n);
    }

    if (n < 10) {
        return n;  
    } else {
        return (n % 10) + sum_of_digits(n / 10); 
    }
}

int main() {
    int number = -4598;
    int sum = sum_of_digits(number);
    printf("Sum of digits of %d: %d\n", number, sum);
    return 0;
}
