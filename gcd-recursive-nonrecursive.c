#include <stdio.h>

int gcd_recursive(int a, int b) {
    if (b == 0) return a < 0 ? -a : a;
    return gcd_recursive(b, a % b);
}

int gcd_iterative(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Recursive GCD = %d\n", gcd_recursive(a, b));
    printf("Non-recursive GCD = %d\n", gcd_iterative(a, b));
    return 0;
}

/* Sample input: 48 18
   Sample output:
   Recursive GCD = 6
   Non-recursive GCD = 6 */
