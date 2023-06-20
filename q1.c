// 1. Write a recursive function to calculate sum of first N natural number

#include <stdio.h>

int calculate_sum(int n) {
    if (n == 0) {
        return 0;  
    } else {
        return n + calculate_sum(n - 1);  
    }
}

int main() {
    int N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    int sum = calculate_sum(N);
    printf("Sum of first %d natural numbers: %d\n", N, sum);
    return 0;
}
