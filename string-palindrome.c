#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200];
    int left, right, palindrome = 1;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    left = 0;
    right = (int)strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("%s is %sa palindrome.\n", s, palindrome ? "" : "not ");
    return 0;
}

/* Sample input: madam
   Sample output: madam is a palindrome. */
