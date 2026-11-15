#include <stdio.h>

int main()
{
    int n, original, temp, digit, digits = 0;
    int i;
    long long sum = 0, power;

    printf("my name is yugal balpande ")

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Negative numbers are not Armstrong numbers.");
        return 0;
    }

    original = n;
    temp = n;

    do
    {
        digits++;
        temp = temp / 10;
    }
    while(temp != 0);

    temp = n;

    do
    {
        digit = temp % 10;
        power = 1;

        for(i = 1; i <= digits; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }
    while(temp != 0);

    if(sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}