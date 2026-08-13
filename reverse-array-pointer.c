#include <stdio.h>

int main(void) {
    int n, a[100], *p = a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", p + i);

    printf("Reverse order: ");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", *(p + i));

    printf("\n");
    return 0;
}

/* Sample input: 5
   1 2 3 4 5
   Sample output: Reverse order: 5 4 3 2 1 */
