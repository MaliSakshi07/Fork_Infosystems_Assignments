#include<stdio.h>
#include<Conio.h>
int main()
{
    int arr[7] = {}, i = 0;

    printf("\nAccept Array of Element :\n");

    for(i = 0; i<7; i++)
    {
        printf("Enter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nDisplay Elements :\n");

    for(i=0;i<7;i++)
    {
        printf("\nValue of %d Element : %d",i+1,arr[i]);
    }

    getch();
    return 0;

}
