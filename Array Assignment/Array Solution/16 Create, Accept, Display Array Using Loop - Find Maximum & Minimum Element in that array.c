#include<stdio.h>
#include<conio.h>

#define Size 5

int main()
{
    int Arr[Size] = {}, i= 0 ,Min, Max = 0;

     printf("\nAccepting Element Of Array :");
    for(i=0;i<Size;i++)
    {
        printf("\nEnter Element %d :",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("\nDisplay Array Element:\n");
    for(i=0; i<Size; i++)
    {
        printf("\nArray Element %d : %d",i+1,Arr[i]);
    }

    for(i=0; i< Size; i++)
    {
        if(Max <= Arr[i])
        {
            Max = Arr[i];
        }
    }

    for(i=0; i < Size; i++)
    {
        if(Min >= Arr[i])
        {
            Min = Arr[i];
        }
    }

    printf("\nMaximum Element of An Array is : %d",Max);
    printf("\Minimum Element of An Array is : %d",Min);

    getch();
    return 0;
}
