#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[7]={}, i=0, Ele=0;

    printf("\nAccept Array of Element :\n");

    for(i=0;i<7;i++)
    {
        printf("Enter Number %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nDisplay Array :\n");

    for(i=0;i<7;i++)
    {
        printf("\nValue of i Element : %d",i+1,arr[i]);
    }

    printf("\n\nEnter Element for the Searched :");
    scanf("%d",&Ele);

    for(i=0; i<7;i++)
    {
        if(Ele == arr[i])
        {
            break;
        }
    }
    if(i == 7)
    {
        printf("\nGiven Element is not found in Array..");
    }
    else
    {
        printf("\nEntered Element Found at Index => %d",(i + 1));
    }
    getch();
    return 0;

}
