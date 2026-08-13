#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200];
    int pos, n, len;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Enter starting position (0-based) and number of characters: ");
    scanf("%d %d", &pos, &n);

    len = (int)strlen(s);
    if (pos < 0 || pos >= len || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    if (pos + n > len) n = len - pos;
    memmove(s + pos, s + pos + n, len - pos - n + 1);

    printf("Result = %s\n", s);
    return 0;
}

/* Sample input:
   Programming
   3 4
   Sample output: Result = Proing */
