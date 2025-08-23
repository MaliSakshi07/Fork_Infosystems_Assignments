#include<stdio.h>
#include<conio.h>

#define Size 5

int main()
{
    int Arr[Size]={},i=0,Sum=0;

    printf("\nAccept the Array Element :");
    for(i=0;i<Size;i++)
    {
        printf("\nEnter Element %d :",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("\nDisplay Array Element :");
    for(i=0;i<Size;i++)
    {
        printf("\nArray Element %d : %d",i+1,Arr[i]);
    }

    for(i=0;i<Size;i++)
    {
        Sum += Arr[i];
    }

    printf("\nSummation Of All Element : %d",Sum);

    getch();
    return 0;

}
