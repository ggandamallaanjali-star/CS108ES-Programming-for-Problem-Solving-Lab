#include <stdio.h>

int main(void) {
    double x, term = 1.0, sum = 1.0;
    int n;

    printf("Enter x and n: ");
    scanf("%lf %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        term *= x;
        sum += term;
    }

    printf("Sum = %.2f\n", sum);
    return 0;
}

/* Sample input: 5 3
   Sample output: Sum = 156.00 */
