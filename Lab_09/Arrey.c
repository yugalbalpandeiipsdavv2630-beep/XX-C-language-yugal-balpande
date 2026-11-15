
#include <stdio.h>

int main()
{
    int a[10], n, i;
    int max, min;

    printf("my name is yugal balpande");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d", min);

    return 0;
}