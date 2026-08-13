#include <stdio.h>

int main(void) {
    int n, original, sum = 0, reverse = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("%d is %sa palindrome.\n", original,
           original == reverse ? "" : "not ");

    return 0;
}

/* Sample input: 1221
   Sample output:
   Sum of digits = 6
   1221 is a palindrome. */
