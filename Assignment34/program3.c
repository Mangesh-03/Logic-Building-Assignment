// Write a program which returns addition of all element from singly linear
// linked list.

// Function Prototype :

// int Addition( PNODE Head);

// Input linked list : |10|->|20|->|30|->|40|
// Output : 100

#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(NULL == *first)
    {
        *first = newn;
        return;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}
int Addition( PNODE first)
{
    int iSum = 0;
   
    while(first != NULL)
    {
        iSum += first -> data;
        first = first -> next;
    }
    return iSum;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    InsertFirst(&head,51);
    InsertFirst(&head,111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    iRet = Addition(head);

    printf("Addition is : %d\n",iRet);
    return 0;
}
