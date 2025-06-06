// Accept N numbers from user and return the smallest number.
// Input : N : 6

// Elements :85 66 3 66 93 88

// Output : 3

#include<stdio.h>
#include<stdlib.h>


int  Minimum( int *Arr, int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }
    iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] < iMin )
        {
            iMin =Arr[iCnt];
        }
       
    }
    return (iMin);
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    int iRet = 0;

    printf("Enter Number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory ! ");
        return -1;
    }

    printf("\nEnter the %d elements  \n",iLength);

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        printf("Enter the element %d : \n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

   

    iRet = Minimum(iPtr,iLength);
    printf("Smallest Number is : %d\n",iRet);

    free(iPtr);
    return 0;


}