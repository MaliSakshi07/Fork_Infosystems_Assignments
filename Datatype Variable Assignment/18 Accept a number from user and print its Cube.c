#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    int Cube = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Cube = No*No*No;

    printf("\nCube = %d",Cube);

    getch();
    return 0;
}
