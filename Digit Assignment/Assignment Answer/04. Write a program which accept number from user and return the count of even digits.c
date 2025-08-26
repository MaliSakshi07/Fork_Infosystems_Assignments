#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, E_Cnt = 0, Temp = 0, Dig = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
       Dig = Temp % 10;
       if(Dig%2 == 0)
       {
           E_Cnt++;
       }
       Temp /= 10;
    }
    printf("\nCount Of Even Digit : %d.",E_Cnt);

    getch();
    return 0;
}
