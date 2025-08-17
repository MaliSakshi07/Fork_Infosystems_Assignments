#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[7] = {},i=0;

    printf("\nElements of Array :\n");
    for(i =0; i <7; i++)
    {
        printf("\nValue of %d element : %d",i+1,arr[i]);
    }

    getch();
    return 0;
}
