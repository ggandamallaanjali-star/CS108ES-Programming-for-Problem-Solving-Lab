#include <stdio.h>

int main(void) {
    int number, rows;

    printf("Enter number and number of rows: ");
    scanf("%d %d", &number, &rows);

    for (int i = 1; i <= rows; i++)
        printf("%d x %d = %d\n", number, i, number * i);

    return 0;
}

/* Sample input: 5 3
   Sample output:
   5 x 1 = 5
   5 x 2 = 10
   5 x 3 = 15 */
