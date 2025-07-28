#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("\nGiven %d Number is Positive.",No);
    }
    else
    {
        printf("\nGiven %d Number is Negative.",No);
    }
    getch();
    return 0;
}
