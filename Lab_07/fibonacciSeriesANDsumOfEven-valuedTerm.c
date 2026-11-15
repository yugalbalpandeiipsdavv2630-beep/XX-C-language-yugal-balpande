
#include <stdio.h>

int main()
{
    int n, i;
    long long a = 0, b = 1, c;
    long long sum = 0;

    printf("my name is yugal balpande ");
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%lld ", a);

        if(a % 2 == 0)
        {
            sum = sum + a;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of even terms = %lld", sum);

    return 0;
}