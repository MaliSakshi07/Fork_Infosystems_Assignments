#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0, temp = 0, rev = 0,rem = 0;

    printf("\nEnter a Number :");
    scanf("%d",&no);

    temp = no;
    while(temp != 0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp /=10;
    }
    printf("Reverse Number is : %d",rev);
    
    getch();
    return 0;
}
