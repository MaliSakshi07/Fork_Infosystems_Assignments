#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Temp = 0, Ecnt = 0, Ocnt = 0,Dig = 0 , Sub = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp > 0)
    {
       Dig = Temp%10;
       if(Dig % 2 == 0)
       {
           Ecnt++;
       }
       else if(Dig % 2 == 1)
       {
           Ocnt++;
       }
       Temp /= 10;
    }
    Sub = Ecnt - Ocnt;

    printf("\nDifference between summation of even digits and summation of odd digits : %d.",Sub);

    getch();
    return 0;
}
