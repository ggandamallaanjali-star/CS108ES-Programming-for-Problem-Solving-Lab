#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d, r1, r2, real, imag;

    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and distinct roots: %.2f, %.2f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Real and equal roots: %.2f, %.2f\n", r1, r1);
    } else {
        real = -b / (2 * a);
        imag = sqrt(-d) / fabs(2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               real, imag, real, imag);
    }

    return 0;
}

/* Sample input: 1 -5 6
   Sample output: Real and distinct roots: 3.00, 2.00 */
