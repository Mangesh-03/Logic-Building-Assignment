#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = -iNo;i < iNo; i++)
    {
        if(i < 0)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}