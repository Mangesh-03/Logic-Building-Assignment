// Accept character from user. If it is capital then display all the
// characters from the input characters till Z. If input character is small
// then print all the characters in reverse order till a. In other cases
// return directly.

// Input : Q
// Output : Q R S T U V W X Y Z
// Input : m
// Output : m l k j i h g f e d c b a
// Input : 8
// Output :

#include<stdio.h>
void Display(char ch)
{

    if((ch >= 'A') &&(ch <='Z'))
    { 
        for(char i = ch ; i <='Z';i++,ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if((ch >= 'a') &&(ch <='z'))
    {
        for(char i = ch ; i >='a';i--,ch--)
        {
            printf("%c\t",ch);
        }
    }
    else
    {
        return;
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}