#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Temp = 0, Dig = 0, Cnt = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp%10;
        if(Dig == 2)
        {
           Cnt++;
        }
        Temp /=10;
    }

    if(Cnt >= 1)
    {
        printf("\nIt contains two");
    }
    else
    {
        printf("\nIt does not contains two");
    }
    getch();
    return 0;
}
