////////////////////////////////////////////////////////////////////////////
//
//  Header Files
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
//  Structure Definition
//
////////////////////////////////////////////////////////////////////////////

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description   : Insert node at beginning of linked list
//  Input         : Pointer to pointer of head, Integer
//  Output        : None
//  Author        : Satyajeet Manohar Ghule
//  Date          : 31/12/2025
//
////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->Next = *first;
        *first = newn;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDigit
//  Description   : Count Digit of Each Node.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 31/12/2025
//
////////////////////////////////////////////////////////////////////////////

void CountDigit(PNODE first)
{
    int iDigit = 0, iCnt = 0;
    printf("Digit in Each Node are :\n");
    while(first != NULL)
    {
        iDigit = first->Data;
        iCnt = 0;

        if(iDigit == 0)
        {
            iCnt = 1;
        }
        while(iDigit != 0)
        {
            iCnt++;
            iDigit = iDigit / 10;
        }
        printf("| %d |-> ",iCnt);
        first = first->Next;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display All Node
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 31/12/2025
//
////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ",first->Data);
        first = first->Next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,230);
    InsertFirst(&head,0);
    InsertFirst(&head,266);
    InsertFirst(&head,95);
    InsertFirst(&head,320);
    InsertFirst(&head,2559);   
    Display(head);

    CountDigit(head);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |2229|->|320|->|95|->|226|->|0|->|230|->NULL
//  
//  Output :
//           Digit in Each Node are :
//
//           | 4 |-> | 3 |-> | 2 |-> | 3 |-> | 1 |-> | 3 |->
//              
////////////////////////////////////////////////////////////////////////////