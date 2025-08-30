#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0, fretwo = 0, temp = 0, dig = 0;

    printf("\nEnter a Number :");
    scanf("%d",&no);

    temp = no;

    while(temp > 0)
    {
        dig = temp%10;
        if(dig == 2)
        {
            fretwo++;
        }
        temp /= 10;
    }
    printf("\nFrequency Count Of unit 2 is : %d",fretwo);

    getch();
    return 0;
}
