#include<stdio.h>
#include<conio.h>
int main()
{
    int Sub1 = 0;
    int Sub2 = 0;
    int Sub3 = 0;
    int TMarks = 0;
    float Per = 0.0;

    printf("\nEnter Subject 1 Marks :");
    scanf("%d",&Sub1);

    printf("\nEnter Subject 2 Marks :");
    scanf("%d",&Sub2);

    printf("\nEnter Subject 3 Marks :");
    scanf("%d",&Sub3);

    TMarks = Sub1 + Sub2 + Sub3;

    Per = (TMarks/3);

    printf("\nTotal Marks Of Subjects : %d",TMarks);
    printf("\nPercentage : %f",Per);

    getch();
    return 0;
}
