#include <stdio.h>

int main(void) {
    int n;
    const int values[] = {50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Enter number (1-50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Roman equivalent = ");
    for (int i = 0; i < 7; i++) {
        while (n >= values[i]) {
            printf("%s", symbols[i]);
            n -= values[i];
        }
    }
    printf("\n");

    return 0;
}

/* Sample input: 49
   Sample output: Roman equivalent = XLIX */
