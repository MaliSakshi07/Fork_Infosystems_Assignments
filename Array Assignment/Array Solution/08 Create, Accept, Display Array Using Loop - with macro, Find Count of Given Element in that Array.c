#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{
    int arr[size] = {}, i = 0,No=0,cnt=0;

    printf("\nAccept Array Element :");
    for(i=0; i < size; i++)
    {
        printf("Enter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nDisplay Array Element :");
     for(i=0;i<size;i++)
    {
        printf("\nValue of %d Element : %d",i+1,arr[i]);
    }

    printf("\nEnter a Number for Count : ");
    scanf("%d",&No);

    for(i=0; i<size; i++)
    {
        if(No == arr[i])
        {
            cnt++;
        }
    }
    printf("\nCount of given element in that Array : %d",cnt);

    getch();
    return 0;

}
