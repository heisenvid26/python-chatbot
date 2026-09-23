#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int validOperation = 1;

    printf("=====================================\n");
    printf("           SIMPLE CALCULATOR\n");
    printf("=====================================\n");
    printf("Supported operations: + - * /\n\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("\nError: Division by zero is not allowed.\n");
                validOperation = 0;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("\nError: Invalid operator entered.\n");
            validOperation = 0;
    }

    if (validOperation) {
        printf("\n=====================================\n");
        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
        printf("=====================================\n");
    }

    return 0;
}