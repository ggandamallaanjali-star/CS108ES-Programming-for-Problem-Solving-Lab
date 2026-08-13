#include <stdio.h>

int main(void) {
    int a[10][10], b[10][10], c[10][10] = {0};
    int r1, c1, r2, c2;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    printf("Enter A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);

    printf("Enter B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];

    printf("Product matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

/* Sample input:
   A: 2 2 / 1 2 3 4
   B: 2 2 / 5 6 7 8
   Sample output:
   19 22
   43 50 */
