#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\nEnter 1st Number :");
    scanf("%d",&No1);
    printf("\nEnter 2nd Number :");
    scanf("%d",&No2);

    if(No1 > No2)
    {
        printf("\nGiven %d Number is Greater.",No1);
    }
    else if(No1 < No2)
    {
        printf("\nGiven %d Number is Greater.",No2);
    }
    getch();
    return 0;
}

