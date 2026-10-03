#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    c = a % b;

    printf("My name is Yugal Balpande solve Question 6\n");
    printf("remainder= %d", c);

    return 0;
}