#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200], ch;
    int position = -1;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Enter character: ");
    scanf(" %c", &ch);

    for (int i = 0; s[i]; i++) {
        if (s[i] == ch) {
            position = i;
            break;
        }
    }

    printf("Position = %d\n", position);
    return 0;
}

/* Sample input:
   computer
   p
   Sample output: Position = 3 */
