#include <stdio.h>

int binary_search(const int a[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    int n, a[100], key;

    printf("Enter number of sorted elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    int pos = binary_search(a, n, key);
    if (pos == -1) printf("Key not found.\n");
    else printf("Key found at index %d.\n", pos);

    return 0;
}

/* Sample input:
   5
   10 20 30 40 50
   40
   Sample output: Key found at index 3. */
