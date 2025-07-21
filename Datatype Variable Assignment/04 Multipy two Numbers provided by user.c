#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Mult = 0;

    printf("\nEnter 1st Number :");
    scanf("%d",&No1);

    printf("\nEnter 2nd Number :");
    scanf("%d",&No2);

    Mult = No1 * No2;

    printf("\nMultiplication of %d and %d = %d",No1,No2,Mult);
    getch();
    return 0;
}
