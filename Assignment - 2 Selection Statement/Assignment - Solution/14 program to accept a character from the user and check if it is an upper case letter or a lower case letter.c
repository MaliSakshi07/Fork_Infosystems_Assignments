#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\nEnter a Character :");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("\nGiven character is lower case.");
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("\nGiven character is upper case.");
    }
    else
    {
        printf("\nGiven character is not letter.");
    }

    getch();
    return 0;
}
