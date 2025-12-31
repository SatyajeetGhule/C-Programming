////////////////////////////////////////////////////////////////////////////
//
//  Header Files
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>

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
//  Date          : 30/12/2025
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
//  Function Name : Search
//  Description   : Check Whetere is Number is Present or not.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 30/12/2025
//
////////////////////////////////////////////////////////////////////////////

bool Search(PNODE first, int no)
{
    while (first != NULL)
    {
        if(first->Data == no)
        {
            return true;
        }
        first = first->Next;
    }    
    return false;
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display All Node
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 30/12/2025
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
    int iValue = 33;
    bool bRet = false;
    PNODE head = NULL;

    InsertFirst(&head,20);
    InsertFirst(&head,33);
    InsertFirst(&head,26);
    InsertFirst(&head,25);
    InsertFirst(&head,29);
    
    Display(head);
    bRet = Search(head,iValue);
    if(bRet == true)
    {
        printf("Number %d is Present in List: \n",iValue);
    }
    else
    {
        printf("Number %d is not Present in List: \n",iValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |29|->|25|->|26|->|33|->|20|->NULL
//  
//  Output :
//           Number 33 is Present in List.
//
////////////////////////////////////////////////////////////////////////////
