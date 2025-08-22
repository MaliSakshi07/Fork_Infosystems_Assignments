#include<stdio.h>
#include<Conio.h>

#define size 5

int main()
{
    int arr[size] = {}, i = 0,cnt = 0;

    printf("\nAccept Array Element :");

    for(i=0;i<size;i++)
    {
        printf("\nEnter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nDisplay Array Element :\n");
    for(i=0;i<size;i++)
    {
        printf("\nArray Element %d : %d",i+1,arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]% 2 == 1)
        {
            cnt++;
        }
    }
    printf("\n\nCount of Odd Element = %d",cnt);

    getch();
    return 0;
}

