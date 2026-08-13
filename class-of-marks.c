#include <stdio.h>

int main(void) {
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage < 40)
        printf("Failed\n");
    else if (percentage < 60)
        printf("Second Class\n");
    else if (percentage < 70)
        printf("First Class\n");
    else
        printf("Distinction\n");

    return 0;
}

/* Sample input: 72
   Sample output: Distinction */
