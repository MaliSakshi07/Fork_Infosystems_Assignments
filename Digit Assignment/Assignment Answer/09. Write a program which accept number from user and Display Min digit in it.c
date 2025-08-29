#include<stdio.h>
#include<Conio.h>

int main()
{
    int Num = 0, Temp = 0, Min, Dig = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Min > Dig)
        {
            Min = Dig;
        }
        Temp /= 10;
    }
    printf("\nMinimum Digit is : %d",Min);

    getch();
    return 0;
}
