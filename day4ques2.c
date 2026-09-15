//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    long long n, sum;

    printf("Enter a positive integer (n): ");
    if (scanf("%lld", &n) != 1 || n < 1) {
        printf("Please enter a valid natural number (>= 1).\n");
        return 1;
    }

    // Using long long to prevent memory overflow
    sum = n * (n + 1) / 2;

    printf("The sum of the first %lld natural numbers is: %lld\n", n, sum);
    return 0;
}
