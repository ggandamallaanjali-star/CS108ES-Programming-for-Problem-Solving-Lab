#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[100];
    FILE *fp;
    int ch, lines = 0, words = 0, characters = 0, in_word = 0;

    printf("Enter file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
    if (!fp) {
        perror("Unable to open file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') lines++;

        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    fclose(fp);
    printf("Lines = %d\nWords = %d\nCharacters = %d\n",
           lines, words, characters);
    return 0;
}

/* Sample file:
   Hello world
   C programming
   Output:
   Lines = 2
   Words = 4
   Characters = 26 */
