#include <stdio.h>

long long power_recursive(int x, int n) {
    if (n == 0) return 1;
    return x * power_recursive(x, n - 1);
}

long long power_iterative(int x, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) result *= x;
    return result;
}

int main(void) {
    int x, n;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    if (n < 0) {
        printf("Exponent must be non-negative.\n");
        return 1;
    }

    printf("Recursive power = %lld\n", power_recursive(x, n));
    printf("Non-recursive power = %lld\n", power_iterative(x, n));
    return 0;
}

/* Sample input: 2 5
   Sample output:
   Recursive power = 32
   Non-recursive power = 32 */
