#include <stdio.h>

void copy_contents(FILE *source, FILE *destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);
}

int main(void) {
    char f1[100], f2[100], f3[100];
    FILE *a, *b, *c;

    printf("Enter first, second and third file names: ");
    scanf("%99s %99s %99s", f1, f2, f3);

    a = fopen(f1, "r");
    b = fopen(f2, "r");
    c = fopen(f3, "w");

    if (!a || !b || !c) {
        printf("Unable to open one or more files.\n");
        if (a) fclose(a); if (b) fclose(b); if (c) fclose(c);
        return 1;
    }

    copy_contents(a, c);
    copy_contents(b, c);

    fclose(a); fclose(b); fclose(c);
    printf("Files merged successfully.\n");
    return 0;
}

/* Sample:
   file1.txt = ABC
   file2.txt = XYZ
   file3.txt = ABCXYZ */
