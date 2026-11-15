#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("my name is yugal balpande ");
    printf("Operator dalo (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Do numbers dalo: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+':
            printf("Sum = %d", a + b);
            break;
        case '-':
            printf("Sub = %d", a - b);
            break;
        case '*':
            printf("Mul = %d", a * b);
            break;
        case '/':
            printf("Div = %d", a / b);
            break;
        default:
            printf("Galat operator");
    }

    return 0;
}