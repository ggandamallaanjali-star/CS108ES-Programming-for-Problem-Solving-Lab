#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char names[50][100], temp[100];

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}

/* Sample input:
   3
   Ravi
   Anjali
   Kiran
   Sample output:
   Anjali
   Kiran
   Ravi */
