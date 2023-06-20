// Write a recursive function to calculate sum of first N even natural number

#include <stdio.h>
int sum_even(int n){
    if(n == 1){
    return 2;
    }
    else{
        return (2*n) + sum_even(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int sum = sum_even(n);
    printf("Sum of first %d even natural numbers: %d\n", n, sum);

    return 0;
}