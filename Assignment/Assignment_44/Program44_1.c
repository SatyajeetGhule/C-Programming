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
//  Date          : 02/01/2026
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
//  Function Name : MakeAbsolute
//  Description   : Replace Negative Numbers with Absolute Value and Display on Screen.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 02/01/2026
//
////////////////////////////////////////////////////////////////////////////

void MakeAbsolute(PNODE first)
{
    printf("Updated element are :\n");
    while(first != NULL)
    {
        if(first->Data < 0)
        {
            first->Data = -first->Data;
        }
        printf("| %d |->",first->Data);
        first = first->Next;
    }
    printf("NULL\n");
}


////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display All Node
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 02/01/2026
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

    InsertFirst(&head,-20);
    InsertFirst(&head,33);
    InsertFirst(&head,-26);
    InsertFirst(&head,25);
    InsertFirst(&head,-29);     
    Display(head);

    MakeAbsolute(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : | -29 |-> | 25 |-> | -26 |-> | 33 |-> | -20 |-> NULL
//
//  Output :
//           Updated element are :
//
//           | 29 |->| 25 |->| 26 |->| 33 |->| 20 |->NULL
//
////////////////////////////////////////////////////////////////////////////
