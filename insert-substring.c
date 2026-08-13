#include <stdio.h>
#include <string.h>

int main(void) {
    char mainstr[200], sub[100], result[300];
    int pos;

    printf("Enter main string: ");
    fgets(mainstr, sizeof(mainstr), stdin);
    mainstr[strcspn(mainstr, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    printf("Enter position (0-based): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > (int)strlen(mainstr)) {
        printf("Invalid position.\n");
        return 1;
    }

    strncpy(result, mainstr, pos);
    result[pos] = '\0';
    strcat(result, sub);
    strcat(result, mainstr + pos);

    printf("Result = %s\n", result);
    return 0;
}

/* Sample input:
   HelloWorld
   Beautiful
   5
   Sample output: Result = HelloBeautifulWorld */
