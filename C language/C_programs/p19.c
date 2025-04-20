
#include <stdio.h>

int main() {
    int a, b, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%d", &a);

    printf("Enter second operand: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}