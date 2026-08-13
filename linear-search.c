#include <stdio.h>

int linear_search(const int a[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key) return i;
    return -1;
}

int main(void) {
    int n, a[100], key;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    int pos = linear_search(a, n, key);
    if (pos == -1) printf("Key not found.\n");
    else printf("Key found at index %d.\n", pos);

    return 0;
}

/* Sample input:
   5
   10 20 30 40 50
   30
   Sample output: Key found at index 2. */
