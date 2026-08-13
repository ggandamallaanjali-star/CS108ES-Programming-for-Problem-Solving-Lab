#include <stdio.h>

int main(void) {
    int n, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
        is_prime = 0;
    else
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) {
                is_prime = 0;
                break;
            }

    printf("%d is %sprime.\n", n, is_prime ? "" : "not ");

    return 0;
}

/* Sample input: 29
   Sample output: 29 is prime. */
