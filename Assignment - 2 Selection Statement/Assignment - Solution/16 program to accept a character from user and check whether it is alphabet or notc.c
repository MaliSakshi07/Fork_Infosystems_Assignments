#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\nEnter a Character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }

    getch();
    return 0;
}
