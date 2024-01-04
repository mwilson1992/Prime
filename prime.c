//Simple c program to check whether a given number is prime or not
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1)
        return false;

    for (int divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0)
            return false;
    }

    return true;
}

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("Prime Number\n");
    } else {
        printf("Not a prime number\n");
    }

    return 0;
}
