#include<stdio.h>
#include<conio.h>

#define size 7

int main()
{
    int arr[size] = {},i=0,cnt=0;

    printf("\nAccept Array Element :");

    for(i=0;i<size; i++)
    {
        printf("\nEnter a Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nDisplay Array Element :");
    for(i=0; i<size;i++)
    {
        printf("\nValue of %d Element : %d",i+1,arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            cnt++;
        }
    }
    printf("\nCount Of Even Elements in Array : %d",cnt);

    getch();
    return 0;
}
