#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, sum = 0, i = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    while(No != 0)
    {
        i = No % 10;
        sum = i + sum;
        No /= 10;
    }
    printf("Sum = %d ",sum);
    getch();
    return 0;
}
