#include<stdio.h>
#include<conio.h>

int main()
{
    float Fahrenheit = 0.0;
    float Celcius = 0.0;

    printf("\nTempreture in Fahrenheit :");
    scanf("%f",&Fahrenheit);

    Celcius = (Fahrenheit-32)*(0.6);

    printf("\nTempreture in Celsius: %f C",Celcius);

    getch();
    return 0;

}
