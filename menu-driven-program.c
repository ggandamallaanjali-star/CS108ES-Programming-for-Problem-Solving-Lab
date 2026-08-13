#include <stdio.h>

int smallest(const int a[], int n) {
    int x = a[0];
    for (int i = 1; i < n; i++) if (a[i] < x) x = a[i];
    return x;
}

int largest(const int a[], int n) {
    int x = a[0];
    for (int i = 1; i < n; i++) if (a[i] > x) x = a[i];
    return x;
}

int sum(const int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

void menu(void) {
    printf("\n1. Smallest\n2. Largest\n3. Sum\n4. Average\n5. Exit\n");
}

int main(void) {
    int n, a[100], choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    do {
        menu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Smallest = %d\n", smallest(a, n)); break;
            case 2: printf("Largest = %d\n", largest(a, n)); break;
            case 3: printf("Sum = %d\n", sum(a, n)); break;
            case 4: printf("Average = %.2f\n", (double)sum(a, n) / n); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}

/* Sample input:
   4
   10 20 5 15
   choice: 3
   Sample output: Sum = 50 */
