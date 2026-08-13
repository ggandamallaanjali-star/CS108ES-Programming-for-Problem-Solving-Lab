#include <stdio.h>

int main(void) {
    int n, bits[8], i;

    printf("Enter a number (0-255): ");
    scanf("%d", &n);

    if (n < 0 || n > 255) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 7; i >= 0; i--)
        bits[i] = n % 2, n /= 2;

    printf("8-bit binary = ");
    for (i = 7; i >= 0; i--)
        printf("%d", bits[i]);
    printf("\n");

    return 0;
}

/* Sample input: 13
   Sample output: 8-bit binary = 00001101 */
