#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Add = 0;

    printf("\nEnter 1st Number :");
    scanf("%d",&No1);

    printf("\nEnter 2nd Number :");
    scanf("%d",&No2);

    Add = No1 + No2;

    printf("\nAddition = %d",Add);

    getch();
    return 0;
}
