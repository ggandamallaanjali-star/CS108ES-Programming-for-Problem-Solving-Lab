#include <stdio.h>

int main(void) {
    int n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[max_index]) max_index = j;

        int t = a[i];
        a[i] = a[max_index];
        a[max_index] = t;
    }

    printf("Descending order: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* Sample input: 5
   5 1 4 2 8
   Sample output: Descending order: 8 5 4 2 1 */
