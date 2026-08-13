#include <stdio.h>

int main(void) {
    int n, a[100], *p = a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    printf("Array values: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}

/* Sample input: 4
   10 20 30 40
   Sample output: Array values: 10 20 30 40 */
