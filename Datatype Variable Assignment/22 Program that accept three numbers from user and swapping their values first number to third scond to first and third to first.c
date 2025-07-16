#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int temp = 0;

    printf("\nEnter Value For A = ");
    scanf("%d",&A);

    printf("\nEnter Value For B = ");
    scanf("%d",&B);

    printf("\nEnter Value For C = ");
    scanf("%d",&C);

    temp = A;
    A = C;
    C = B;
    B = temp;

    printf("\nA = %d",A);
    printf("\nB = %d",B);
    printf("\nC = %d",C);

    getch();
    return 0;
}
