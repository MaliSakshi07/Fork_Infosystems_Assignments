#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0, c=0, i=0, j=0;

    printf("\n Enter Row Size For Pattern :");
    scanf("%d",&r);

    printf("\n Enter Column Size For Pattern :");
    scanf("%d",&c);

    printf("\n");

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i >= j)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
