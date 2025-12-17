////////////////////////////////////////////////////////////////////////////
//
//  Header Files
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////
//
//  Macro Definitions
//
////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

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
//  Description   : Insert new node at first position
//  Input         : Pointer to pointer of head, Integer
//  Output        : None
//  Author        : Satyajeet Manohar Ghule
//  Date          : 17/12/2025
//
////////////////////////////////////////////////////////////////////////////


void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SearchFirstOcc
//  Description   : Search first occurrence of element
//  Input         : Pointer to head, Integer
//  Output        : Integer (Position)
//  Author        : Satyajeet Manohar Ghule
//  Date          : 10/12/2025
//
////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = SearchFirstOcc(First, 30);
    printf("First Occurrence : %d\n", iRet);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |10|->|20|->|30|->|40|->|50|->|30|->|70|
//  Output :
//           First Occurrence : 3
//
////////////////////////////////////////////////////////////////////////////
