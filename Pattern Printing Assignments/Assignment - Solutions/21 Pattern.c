#include<stdio.h>
#include<stdio.h>
int main()
{
    int i=0, j=0, x=0;

    printf("\nEnter a Number For Pattern :");
    scanf("%d",&x);

    printf("\n");

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            if(i >= j)
            {
                printf(" %c ",j+64);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
