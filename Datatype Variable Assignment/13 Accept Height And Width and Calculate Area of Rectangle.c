#include<stdio.h>
#include<conio.h>

int main()
{
    float Height = 0.0;
    float Width = 0.0;
    float Area = 0.0;

    printf("\nEnter Height for Rectangle :");
    scanf("%f",&Height);

    printf("\nEnter Width For Rectangle :");
    scanf("%f",&Width);

    Area = Height * Width;

    printf("\nArea of Rectangle : %f",Area);

    getch();
    return 0;
}
