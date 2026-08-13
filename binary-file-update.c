#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int values[10], index, new_value;

    if (argc != 12) {
        printf("Usage: %s <file> <10 integers>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "wb+");
    if (!fp) {
        perror("Unable to create binary file");
        return 1;
    }

    for (int i = 0; i < 10; i++)
        values[i] = atoi(argv[i + 2]);

    fwrite(values, sizeof(int), 10, fp);

    printf("Enter index (0-9) and new value: ");
    scanf("%d %d", &index, &new_value);

    if (index < 0 || index >= 10) {
        printf("Invalid index.\n");
        fclose(fp);
        return 1;
    }

    fseek(fp, index * (long)sizeof(int), SEEK_SET);
    fwrite(&new_value, sizeof(int), 1, fp);

    rewind(fp);
    fread(values, sizeof(int), 10, fp);

    printf("Updated values: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", values[i]);
    printf("\n");

    fclose(fp);
    return 0;
}

/* Example command:
   ./binary-file-update data.bin 10 20 30 40 50 60 70 80 90 100
   Input: 4 999
   Output: Updated values: 10 20 30 40 999 60 70 80 90 100 */
