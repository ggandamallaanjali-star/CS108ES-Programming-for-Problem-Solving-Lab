#include <stdio.h>
#include <math.h>

int main(void) {
    double p, r, t, si, amount, ci;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);

    si = (p * r * t) / 100.0;
    amount = p * pow(1.0 + r / 100.0, t);
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

/* Sample input: 10000 10 2
   Sample output:
   Simple Interest = 2000.00
   Compound Interest = 2100.00 */
