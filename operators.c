#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nArithmetic operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b != 0) {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);
    }

    printf("\nRelational operators:\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);

    printf("\nLogical operators:\n");
    printf("(a && b) = %d\n", a && b);
    printf("(a || b) = %d\n", a || b);
    printf("(!a) = %d\n", !a);

    printf("\nBitwise operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    printf("\nIncrement/decrement:\n");
    printf("Original a = %d\n", a);
    printf("Post-increment a++ = %d\n", a++);
    printf("After a++ = %d\n", a);
    printf("Pre-increment ++a = %d\n", ++a);
    printf("Post-decrement a-- = %d\n", a--);
    printf("After a-- = %d\n", a);
    printf("Pre-decrement --a = %d\n", --a);

    return 0;
}

/* Sample input: 10 3
   Sample output: a + b = 13, a - b = 7, a * b = 30, a / b = 3, a % b = 1 */
