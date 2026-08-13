#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("Enter expression (e.g., 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/':
            if (b == 0) printf("Division by zero is not allowed.\n");
            else printf("Result = %d\n", a / b);
            break;
        case '%':
            if (b == 0) printf("Modulo by zero is not allowed.\n");
            else printf("Result = %d\n", a % b);
            break;
        default: printf("Invalid operator.\n");
    }

    return 0;
}

/* Sample input: 20 * 4
   Sample output: Result = 80 */
