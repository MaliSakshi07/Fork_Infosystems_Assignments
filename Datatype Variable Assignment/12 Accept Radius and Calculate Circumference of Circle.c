#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad = 0.0;
    float PI = 3.14;
    float Circumference = 0.0;

    printf("\nEnter Radius Of Circle :");
    scanf("%f",&Rad);

    Circumference = 2*PI*Rad;

    printf("\nCircumference of Circle = %f",Circumference);

    getch();
    return 0;
}
