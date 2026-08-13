#include <stdio.h>

unsigned long long fact_recursive(int n) {
    if (n <= 1) return 1;
    return n * fact_recursive(n - 1);
}

unsigned long long fact_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Enter n from 0 to 20.\n");
        return 1;
    }

    printf("Recursive factorial = %llu\n", fact_recursive(n));
    printf("Non-recursive factorial = %llu\n", fact_iterative(n));
    return 0;
}

/* Sample input: 5
   Sample output:
   Recursive factorial = 120
   Non-recursive factorial = 120 */
