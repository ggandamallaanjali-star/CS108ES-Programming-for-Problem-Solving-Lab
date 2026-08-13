#include <stdio.h>

int main(void) {
    int n;
    unsigned long long a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci sequence: ");
    for (int i = 1; i <= n; i++) {
        printf("%llu ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}

/* Sample input: 8
   Sample output: Fibonacci sequence: 0 1 1 2 3 5 8 13 */
