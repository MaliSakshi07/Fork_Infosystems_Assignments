#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, mult = 1, rem = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    while(No != 0)
    {
        rem = No%10;
        mult = mult * rem;
        No /= 10;
    }
    printf("\nMultiplication of Number is : %d",mult);
    getch();
    return 0;
}
