#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter a Character :");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\nGiven Character is vowel.");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\nGiven Character is consonant.");
    }

    else
    {
        printf("\nGiven Character is Others.");
    }

    getch();
    return 0;
}
