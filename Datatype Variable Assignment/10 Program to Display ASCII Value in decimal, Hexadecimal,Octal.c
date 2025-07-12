#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\nEnter a Character :");
    scanf("%c",&ch);

    printf("\nDecimal = %d",ch);
    printf("\nHexaadecimal = %d",ch);
    printf("\nOctal = %d",ch);

    getch();
    return 0;
}
