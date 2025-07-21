#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("Enter a Number :");
    scanf("%d",&No);

    if(No < 10)
    {
        printf("\nHello");
    }
    else
    {
        printf("\nWorld");
    }

    getch();
    return 0;
}
