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
            if(i%2 == 1)
            {
                printf(" %C ",j+64);
            }
            else
            {
                printf(" %C ",j+96);
            }
        }
        printf("\n");
        j++;
    }
    getch();
    return 0;
}
