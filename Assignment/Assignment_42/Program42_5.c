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
//  Function Name : DisplayOddPosition
//  Description   : print Odd Node which position and Display on Screen.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 01/01/2026
//
////////////////////////////////////////////////////////////////////////////

void DisplayOddPosition(PNODE first)
{
    int pos = 0;
    printf("Odd Node Position are : \n");
    while(first != NULL)
    {
        pos++;
        if((pos % 2) != 0)
        {
            printf("Node : %d ->Position : %d\n",first->Data,pos);
        }
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
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,20);
    InsertFirst(&head,33);
    InsertFirst(&head,26);
    InsertFirst(&head,25);
    InsertFirst(&head,29);   
    Display(head);

    DisplayOddPosition(head);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |29|->|25|->|26|->|33|->|20|->NULL
//  
//  Output :
//           Odd Node Position are :
//           Node : 29 -> Position : 1
//           Node : 26 -> Position : 3
//           Node : 20 -> Position : 5
//
////////////////////////////////////////////////////////////////////////////
