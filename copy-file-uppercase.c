#include <stdio.h>
#include <ctype.h>

int main(void) {
    char source[100], destination[100];
    FILE *in, *out;
    int ch;

    printf("Enter source and destination files: ");
    scanf("%99s %99s", source, destination);

    in = fopen(source, "r");
    out = fopen(destination, "w");

    if (!in || !out) {
        printf("Unable to open file.\n");
        if (in) fclose(in);
        if (out) fclose(out);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF)
        fputc(toupper((unsigned char)ch), out);

    fclose(in);
    fclose(out);
    printf("File copied with lowercase characters converted to uppercase.\n");
    return 0;
}

/* Sample source: Hello World!
   Sample destination: HELLO WORLD! */
