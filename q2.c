// Write a recursive function to calculate sum of first N odd natural number

#include <stdio.h>

int sum_odd(int n) {
    if (n == 1) {
        return 1;  
    } else {
        return (2 * n - 1) + sum_odd(n - 1);  
    }
}

int main() {
    int N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    int sum = sum_odd(N);
    printf("Sum of first %d odd natural numbers: %d\n", N, sum);
    return 0;
}
