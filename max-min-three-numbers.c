#include <stdio.h>

int main(void) {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

/* Sample input: 12 5 20
   Sample output:
   Maximum = 20
   Minimum = 5 */
