#include <stdio.h>

void left_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
}

void repeated_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", i);
        printf("\n");
    }
}

void consecutive_numbers(int n) {
    int value = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", value++);
        printf("\n");
    }
}

void star_pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\n1) Left number pyramid:\n");
    left_numbers(n);

    printf("\n2) Repeated number pyramid:\n");
    repeated_numbers(n);

    printf("\n3) Consecutive number pyramid:\n");
    consecutive_numbers(n);

    printf("\n4) Star pyramid:\n");
    star_pyramid(n);

    return 0;
}

/* Sample input: 3
   Sample output includes:
   1
   1 2
   1 2 3

   1
   2 2
   3 3 3

   1
   2 3
   4 5 6 */
