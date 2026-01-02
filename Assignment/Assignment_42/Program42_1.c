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
//  Function Name : ReplaceEven
//  Description   : Replace Even Number with '0' and Display on Screen.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 01/01/2026
//
////////////////////////////////////////////////////////////////////////////

void ReplaceEven(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    printf("Updated Node are : \n");
    while(temp != NULL)
    {
        if(temp->Data % 2 == 0)
        {
            temp->Data = 0;
        }
        printf("| %d |-> ",temp->Data);
        temp = temp->Next;
    }    
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
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,7);
    InsertFirst(&head,6);
    InsertFirst(&head,95);
    InsertFirst(&head,2);
    InsertFirst(&head,25);   
    Display(head);

    ReplaceEven(head);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : | 25 | -> | 2 | -> | 95 | -> | 6 | -> | 7 | -> NULL
//  
//  Output :
//           Updated Node are :
//           | 25 |-> | 0 |-> | 95 |-> | 0 |-> | 7 |->
//              
////////////////////////////////////////////////////////////////////////////
