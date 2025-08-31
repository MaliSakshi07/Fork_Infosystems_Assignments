#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0, temp = 0, dig = 0,sum = 0,cnt = 0;

    printf("Enter 5 Digit Number :");
    scanf("%d",&no);

    temp = no;

    for(temp = 1; temp <= 5; temp++)
    {
        cnt++;

        sum += temp;
    }
    if(cnt == 5)
    {
        printf("\nSum of 5 Numbers is : %d",temp);
    }
    else
    {
        printf("\nInvalid Input");
    }
    getch();
    return 0;
}
