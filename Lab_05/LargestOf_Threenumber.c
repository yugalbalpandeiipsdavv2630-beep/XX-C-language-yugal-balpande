#include <stdio.h>

int main()
{
    int a = 8;
    int b = 3;
    int c = 14;

    printf("My name is Yugal Balpande solve Question 13\n");

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is largest", a);
        }
        else
        {
            printf("%d is largest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is largest", b);
        }
        else
        {
            printf("%d is largest", c);
        }
    }

    return 0;
}