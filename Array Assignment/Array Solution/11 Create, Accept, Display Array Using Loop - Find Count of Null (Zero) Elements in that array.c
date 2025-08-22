#include<stdio.h>
#include<conio.h>

#define size 7

int main()
{
    int arr[size] = {} , i = 0 , cnt = 0;

    printf("\nAccept Array Element:\n");

    for(i=0;i<size;i++)
    {
        printf("Enter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nDisplay Array Element :");
    for(i=0;i<size;i++)
    {
        printf("\nValue of Element %d : %d",i+1,arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i] == 0)
        {
            cnt++;
        }
    }
    printf("\nCount Of Null Elements in Array => %d",cnt);

    getch();
    return 0;
}
