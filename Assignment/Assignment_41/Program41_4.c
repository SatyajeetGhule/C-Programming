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
//  Date          : 01/01/2026
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
//  Function Name : DisplayPrime
//  Description   : Display on Screen Prime Number.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 01/01/2026
//
////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE first)
{
    int iNo = 0, iCnt = 0;
    int iPrime = 1;

    printf("Prime Node are :\n");
    while (first != NULL)
    {
        iNo = first->Data;
        iPrime = 1;

        if (iNo < 2)
        {
            iPrime = 0;
        }

        for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                iPrime = 0;
                break;
            }
        }

        if (iPrime == 1)
        {
            printf("| %d | -> ", iNo);
        }

        first = first->Next;
    }
    printf("\n");
}


////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display All Node
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 01/01/2026
//
////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |-> ",first->Data);
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

    InsertFirst(&head,7);
    InsertFirst(&head,6);
    InsertFirst(&head,95);
    InsertFirst(&head,2);
    InsertFirst(&head,25);   
    Display(head);

    DisplayPrime(head);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : | 25 |-> | 2 |-> | 95 |-> | 6 |-> | 7 |-> NULL
//  
//  Output :
//           Prime Node are :
//           | 2 | -> | 7 | ->
//              
////////////////////////////////////////////////////////////////////////////