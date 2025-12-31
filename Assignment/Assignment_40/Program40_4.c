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
//  Function Name : ReplaceNegative
//  Description   : Modify list: negative values become 0.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 31/12/2025
//
////////////////////////////////////////////////////////////////////////////

void ReplaceNegative(PPNODE first)
{
    PNODE temp = NULL;
    temp = *first;
    while(temp != NULL)
    {
        if(temp->Data < 0)
        {
            temp->Data = 0;
        }
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

    InsertFirst(&head,20);
    InsertFirst(&head,33);
    InsertFirst(&head,26);
    InsertFirst(&head,25);
    InsertFirst(&head,-20);
    InsertFirst(&head,29);   
    Display(head);

    ReplaceNegative(&head);
    printf("After Modify Element are :\n");
    Display(head);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |29|->|-20|->|25|->|26|->|33|->|22|->NULL
//  
//  Output :
//           After Modify Element are :
//
//          | 29 | -> | 0 | -> | 25 | -> | 26 | -> | 33 | -> | 20 | -> NULL
//              
////////////////////////////////////////////////////////////////////////////