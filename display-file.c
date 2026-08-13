#include <stdio.h>

int main(void) {
    char filename[100];
    FILE *fp;
    int ch;

    printf("Enter file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
    if (!fp) {
        perror("Unable to open file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}

/* Sample file contents:
   Hello, C Programming!
   Sample output: the same contents are displayed. */
