#include<stdio.h>
#include<conio.h>
int main()
{
    float Rad = 0.0;
    float Area = 0.0;
    float PI = 3.14;

    printf("\nEnter Radius for calculating Area of Circle :");
    scanf("%f",&Rad);

    Area = PI*Rad*Rad;

    printf("\nArea Of Circle = %f.",Area);

    getch();
    return 0;
}
