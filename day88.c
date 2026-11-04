#include<stdio.h>
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 3);
    printf("The product is: %d\n", result);
    return 0;
}