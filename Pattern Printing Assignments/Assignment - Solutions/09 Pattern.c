#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0, c=0, i=0, j=0;
    char a='/0';

    printf("\nEnter Row Size For Pattern :");
    scanf("%d",&r);

    printf("\nEnter Column Size For Pattern :");
    scanf("%d",&c);

    printf("\n");

    for(i=1; i<=r; i++)
    {
        for(j=1,a='A'; j<=c; j++)
        {
            printf(" %C ",a++);
        }
        printf("\n");
    }
    getch();
    return 0;
}
