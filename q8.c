// . Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>

void print_fibonacci(int n) {
    static int n1 = 0, n2 = 1, next_term;
  
    if (n > 0) {
        printf("%d ", n1);
        next_term = n1 + n2;
        n1 = n2;
        n2 = next_term;
        print_fibonacci(n - 1);  // Recursive call with n-1
    }
}

int main() {
    int N = 10;
    printf("Fibonacci Series (first %d terms): ", N);
    print_fibonacci(N);
    return 0;
}
