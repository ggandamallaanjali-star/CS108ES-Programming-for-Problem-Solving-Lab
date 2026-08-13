#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int ch, count = 0;
    char target;

    if (argc != 3) {
        printf("Usage: %s <filename> <character>\n", argv[0]);
        return 1;
    }

    target = argv[2][0];
    fp = fopen(argv[1], "r");
    if (!fp) {
        perror("Unable to open file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        if (ch == target) count++;

    fclose(fp);
    printf("Character '%c' occurs %d time(s).\n", target, count);
    return 0;
}

/* Example:
   File: banana
   Command: ./character-frequency-file.txt banana a
   Output: Character 'a' occurs 3 time(s).
   On Windows: character-frequency-file.exe banana.txt a */
