#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    int Square = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Square = No * No;

    printf("\nSquare = %d",Square);

    getch();
    return 0;
}
