#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[7] = {}, i = 0,Ele = 0;

    printf("Accept Array Element :");

    for(i=0;i<7;i++)
    {
        printf("\nEnter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nSearch Element in Array =>");
    scanf("%d",&Ele);

    for(i=0;i<7;i++)
    {
        if(Ele == arr[i])
        {
            break;
        }
    }
    if(Ele == 7)
    {
        printf("\nElement Location is Not Found...");
    }
    else
    {
            printf("\nLocation of the Array => %d",i+1);
    }
    getch();
    return 0;
}
