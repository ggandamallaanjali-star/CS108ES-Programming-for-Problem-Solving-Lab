#include <stdio.h>
#include <math.h>

double mean(const int a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return sum / n;
}

double variance(const int a[], int n, double m) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double d = a[i] - m;
        sum += d * d;
    }
    return sum / n;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }
}

int main(void) {
    int n, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    double m = mean(a, n);
    double v = variance(a, n, m);
    sort(a, n);

    printf("Mean = %.2f\nVariance = %.2f\nStandard Deviation = %.2f\n",
           m, v, sqrt(v));
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}

/* Sample input: 5
   1 2 3 4 5
   Sample output:
   Mean = 3.00
   Variance = 2.00
   Standard Deviation = 1.41
   Sorted array: 1 2 3 4 5 */
