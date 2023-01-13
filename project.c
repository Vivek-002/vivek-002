#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
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
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation.\n");
            return 0;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
