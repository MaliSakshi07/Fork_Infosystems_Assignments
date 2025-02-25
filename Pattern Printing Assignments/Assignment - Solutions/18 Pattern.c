#include<stdio.h>
#include<stdio.h>
int main()
{
    int i=0, j=0, r=0, c=0;

    printf("\nEnter Row Size For Pattern :");
    scanf("%d",&r);

    printf("\nEnter Column Size For Pattern :");
    scanf("%d",&c);

    printf("\n");

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1 || j==1 || i==r || j==c)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
