#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dig = 0, odd = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    while(No > 0)
    {
        dig = No/10;
        if(dig%2 == 1)
        {
            odd++;
        }
        No /=10;
    }
    printf("\nCount Of Odd Numbers : %d",odd);

    getch();
    return 0;
}
