#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0, c=0, i=0, j=0;

    printf("\nEnter Row Size For Pattern :");//5
    scanf("%d",&r);

    printf("\nEnter Column Size For Pattern :");//4
    scanf("%d",&c);

    printf("\n");

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(j%2 == 0)
            {
                printf(" %c ",i+64);
            }
            else
            {
                printf(" %c ",i+96);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
