// Input : iRow = 4 iCol = 4
// Output : 
//         1 2 3 4
//         5 6 7 8
//         9 1 2 3
//         4 5 6 7

#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int i = 0,j = 0;
    int iNo = 1;
    
    for(i = 1 ;i <= iRow;i++)
    {
        
        for(j = 1; j <= iCol; j++,iNo++)
        {
            if(iNo > 9)
            {
                iNo = 1;
            }
            printf("%d\t",iNo);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the Number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
