#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    float SRoot = 0.0;     ///SquareRoot

    printf("\nEnter a Number :");
    scanf("%d",&No);

    SRoot = SRoot(No);

    printf("Square Root = %d",SRoot);

    getch();
    return 0;
}
