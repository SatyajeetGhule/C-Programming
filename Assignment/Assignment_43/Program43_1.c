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
//  Function Name : Difference
//  Description   : find different Node (Maximum & Minimum) and Display on Screen.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 01/01/2026
//
////////////////////////////////////////////////////////////////////////////

int Difference(PNODE first)
{
    int min = first->Data;
    int max = first->Data;
    
    while(first != NULL)
    {
        if(first->Data > max)
        {
            max = first->Data;
        }
        if(first->Data < min)
        {
            min = first->Data;
        }
        first = first->Next;
    }
    return (max - min);
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

    iRet = Difference(head);
    printf("Difference Node (Maximun & Minimum) is : %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |29|->|25|->|26|->|33|->|20|->NULL
//
//  Output :
//           Difference Node (Maximum & Minimum) is : 13
//
//  Explanation:
//           Maximum = 33
//           Minimum = 20
//           Difference = 33 - 20 = 13
//
////////////////////////////////////////////////////////////////////////////
