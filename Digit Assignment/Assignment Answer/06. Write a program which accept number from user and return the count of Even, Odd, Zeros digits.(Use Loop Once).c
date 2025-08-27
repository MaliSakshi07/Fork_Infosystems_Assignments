#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,dig = 0,o_cnt = 0,temp = 0, e_cnt = 0,z_cnt = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    temp = No;

    while(temp > 0)
    {
        dig = temp%10;
        if(dig % 2 == 0)
        {
            e_cnt++;
        }
         if(dig % 2 == 1)
        {
            o_cnt++;
        }
        if(dig == 0)
        {
            z_cnt++;
        }
        temp /=10;
    }

    printf("\nCount Of Even Numbers : %d",e_cnt);
    printf("\nCount Of Odd Numbers : %d",o_cnt);
    printf("\nCount Of Zero Numbers : %d",z_cnt);

    getch();
    return 0;
}
