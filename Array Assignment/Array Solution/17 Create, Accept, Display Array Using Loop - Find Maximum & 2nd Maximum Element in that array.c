#include<stdio.h>
#include<conio.h>

#define Size 5

int main()
{
    int Arr[Size] = {}, i= 0 ,S_Max = 0, Max = 0;

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

    printf("\nMaximum Element of An Array is : %d",Max);
    printf("\n2nd Maximum Element of An Array is : %d",);

    getch();
    return 0;
}

