// Accept number of rows and number of columns from user and display
// below pattern.

// Input : iRow = 3 iCol = 4
// Output : 
//    
//     * # * #
//     * # * #
//     * # * #

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;

    for( i = 1 ;i <=iRow ;i++)
    {
         printf("\n");
        for( j = 1 ;j <= iCol; j++)
        {
           if( (j % 2)==0)
           {
            printf("#\t");
           }
           else
           {
            printf("*\t");
           }
        }
       
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 2;

    printf("Enter Number of rows  : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}