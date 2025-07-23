#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\nEnter a Character :");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\nGiven character is upper case.");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\nGiven character is lower case.");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\nGiven character is Digit.");
    }
    else
    {
        printf("\nGiven character is special symbol.");
    }

    getch();
    return 0;
}
