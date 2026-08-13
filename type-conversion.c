#include <stdio.h>

int main(void) {
    int i;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a floating-point value: ");
    scanf("%f", &f);

    /* Automatic conversion: int is converted to float. */
    float automatic = i + f;

    /* Explicit casting: float is converted to int. */
    int casted = (int)f;

    printf("Automatic conversion (i + f) = %.2f\n", automatic);
    printf("Explicit cast (int)f = %d\n", casted);

    return 0;
}

/* Sample input: 10 5.75
   Sample output:
   Automatic conversion (i + f) = 15.75
   Explicit cast (int)f = 5 */
