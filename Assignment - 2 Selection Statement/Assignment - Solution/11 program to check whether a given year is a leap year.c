#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("Enter a Year :");
    scanf("%d",&Year);

    if(Year%4 == 0)
    {
        printf("\nGiven %d is leap year",Year);
    }
    else
    {
        printf("\nGiven %d is not leap year",Year);
    }
    getch();
    return 0;
}
