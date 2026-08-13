#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers: ");
    for (int i = 2; i <= n; i++)
        if (is_prime(i)) printf("%d ", i);
    printf("\n");

    return 0;
}

/* Sample input: 20
   Sample output: Prime numbers: 2 3 5 7 11 13 17 19 */
