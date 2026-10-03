#include <stdio.h>

int main()
{
    int a, b, c;

    printf("My name is Shivam Deshmukh solve Question 14\n");

    printf("Enter two numbers");
    scanf("%d %d", &a, &b);

    printf("Before a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After a = %d, b = %d\n", a, b);

    return 0;
}