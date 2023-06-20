// . Write a recursive function to calculate HCF of two numbers

#include <stdio.h>

int calculate_hcf(int a, int b) {
    if (b == 0) {
        return a;  // Base case: when b becomes 0, return a as HCF
    } else {
        return calculate_hcf(b, a % b);  // Recursive call with b and remainder of a/b
    }
}

int main() {
    int num1 = 24;
    int num2 = 36;
    int hcf = calculate_hcf(num1, num2);
    printf("HCF of %d and %d: %d\n", num1, num2, hcf);
    return 0;
}
