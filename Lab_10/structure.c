#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] = {
        {1, "sejal", 85.5},
        {2, "yugal", 90.0},
        {3, "deepan", 88.5}
    };

    int i;

   printf("my name is yugal balpande");

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}