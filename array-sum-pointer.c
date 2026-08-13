#include <stdio.h>

int main(void) {
    int n, a[100], *p, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    p = a;
    for (int i = 0; i < n; i++) sum += *(p + i);

    printf("Sum = %d\n", sum);
    return 0;
}

/* Sample input: 4
   2 4 6 8
   Sample output: Sum = 20 */
