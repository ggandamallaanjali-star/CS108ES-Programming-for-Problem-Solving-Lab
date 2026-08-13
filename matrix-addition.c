#include <stdio.h>

void read_matrix(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
}

void print_matrix(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main(void) {
    int a[10][10], b[10][10], sum[10][10], r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter first matrix:\n");
    read_matrix(a, r, c);
    printf("Enter second matrix:\n");
    read_matrix(b, r, c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    print_matrix(sum, r, c);
    return 0;
}

/* Sample input:
   2 2
   1 2 3 4
   5 6 7 8
   Sample output:
   6 8
   10 12 */
