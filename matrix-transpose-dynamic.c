#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int *a = malloc(rows * cols * sizeof(int));
    int *t = malloc(rows * cols * sizeof(int));

    if (!a || !t) {
        printf("Memory allocation failed.\n");
        free(a); free(t);
        return 1;
    }

    printf("Enter matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i * cols + j]);

    /* Transposed matrix has cols rows and rows columns. */
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            t[j * rows + i] = a[i * cols + j];

    printf("Transpose:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", t[i * rows + j]);
        printf("\n");
    }

    free(a);
    free(t);
    return 0;
}

/* Sample input:
   2 3
   1 2 3
   4 5 6
   Sample output:
   1 4
   2 5
   3 6 */
