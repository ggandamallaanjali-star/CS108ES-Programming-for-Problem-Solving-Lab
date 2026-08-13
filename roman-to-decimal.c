#include <stdio.h>
#include <string.h>
#include <ctype.h>

int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        default: return 0;
    }
}

int main(void) {
    char roman[30];
    int total = 0;

    printf("Enter Roman numeral (I to L): ");
    scanf("%29s", roman);

    for (int i = 0; roman[i]; i++)
        roman[i] = (char)toupper((unsigned char)roman[i]);

    for (int i = 0; roman[i]; i++) {
        int current = value(roman[i]);
        int next = value(roman[i + 1]);
        total += (current < next) ? -current : current;
    }

    printf("Decimal equivalent = %d\n", total);
    return 0;
}

/* Sample input: XL
   Sample output: Decimal equivalent = 40 */
