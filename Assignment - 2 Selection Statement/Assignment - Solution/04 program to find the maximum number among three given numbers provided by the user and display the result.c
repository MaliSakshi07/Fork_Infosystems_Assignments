#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2,No3;

    printf("Enter Three Numbers :");
    scanf("%d%d%d",&No1,&No2,&No3);

    if(No1 > No2 && No1 > No3)
    {
        printf("\n%d is Maximum Number.",No1);
    }
    else if(No2 > No1 && No2 > No3)
    {
        printf("\n%d is Maximum Number.",No2);
    }
    else
    {
         printf("\n%d is Maximum Number.",No3);
    }

    getch();
    return 0;
}
