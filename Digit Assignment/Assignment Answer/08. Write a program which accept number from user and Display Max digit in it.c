#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, temp = 0, max = 0,dig = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    temp = No;

    while(temp >0)
    {
        dig = temp % 10;
        if(max < dig)
        {
            max = dig;
        }
        temp /= 10;
    }
    printf("\nMaximum Number is : %d",max);

    getch();
    return 0;
}
