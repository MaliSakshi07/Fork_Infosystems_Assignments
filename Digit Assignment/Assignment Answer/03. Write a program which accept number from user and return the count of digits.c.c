#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Temp = 0, Dig = 0, Cnt = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    for(Temp = Num; Temp > 0 ;Temp /= 10)
    {
        Cnt++;
    }
    printf("\nCount Of Digit : %d",Cnt);

    getch();
    return 0;

}
