#include <stdio.h>

int main()
{
    int n, original, digit;
    long long reverse = 0;

    printf("my name is yugal balpande ");
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Not a Palindrome Number");
        return 0;
    }

    original = n;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
        printf("%d is a Palindrome Number", original);
    else
        printf("%d is not a Palindrome Number", original);

    return 0;
}