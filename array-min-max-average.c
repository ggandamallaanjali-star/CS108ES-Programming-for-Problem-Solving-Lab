#include <stdio.h>

int main(void) {
    int n, a[100], min, max;
    double sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) return 1;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    min = max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        sum += a[i];
    }

    printf("Minimum = %d\nMaximum = %d\nAverage = %.2f\n",
           min, max, sum / n);

    return 0;
}

/* Sample input: 5
   10 20 5 15 25
   Sample output:
   Minimum = 5
   Maximum = 25
   Average = 15.00 */
