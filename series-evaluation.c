#include <stdio.h>

int main(void) {
    double x, result;

    printf("Enter fractional x: ");
    scanf("%lf", &x);

    result = 1 - x / 2.0 + x * x / 4.0 - x * x * x / 6.0;

    printf("Result = %.6f\n", result);
    return 0;
}

/* Sample input: 0.5
   Sample output: Result = 0.890625 */
