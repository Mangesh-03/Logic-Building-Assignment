// Write a program which accept string from user and count number of
// small characters.

// Input : “Marvellous”

// Output : 9

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(*str == '\0')
    {
        return -1;

    }

    while(*str != '\0')
    {
        if((*str >= 'a') &&(*str <='z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    if(iRet == -1)
    {
        printf("String is empty");
    }
    else
    {
        printf("Small character count : %d\n",iRet);
    }
    return 0;
}