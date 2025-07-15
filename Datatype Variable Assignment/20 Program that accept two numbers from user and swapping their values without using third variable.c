#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 0;
    int B = 0;
    int temp = 0;

    printf("\nEnter Value For A = ");
    scanf("%d",&A);

    printf("\nEnter Value For B = ");
    scanf("%d",&B);

    A = B;
    B = A;

    printf("\nA = %d",A);
    printf("\nB = %d",B);

    getch();
    return 0;
}
