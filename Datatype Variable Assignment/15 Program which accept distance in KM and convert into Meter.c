#include<stdio.h>
#include<conio.h>

int main()
{
    float Km = 0.0;
    int Meter = 0;

    printf("\nEnter Your Distance(KiloMeter) :");
    scanf("%f",&Km);

    Meter = Km * 1000;

    printf("\nDistance in Meter : %d Meter",Meter);

    getch();
    return 0;

}
