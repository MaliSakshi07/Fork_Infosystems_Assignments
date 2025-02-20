#include<stdio.h>
#include<conio.h>
int main()
{
    int r = 0, c = 0, i = 0, j = 0;

    printf("\nEnter Row Size For Pattern :");
    scanf("%d",&r);

    printf("\nEnter Size For Pattern :");
    scanf("%d",&c);

    printf("\n");

    for(i=r; i>=1; i--)
    {
        for(j=c; j>=1; j--)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
