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
//  Description   : Insert node at beginning of linked list
//  Input         : Pointer to pointer of head, Integer
//  Output        : None
//  Author        : Satyajeet Manohar Ghule
//  Date          : 17/12/2025
//
////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if (*Head == NULL)
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
//  Function Name : DisplayPerfect
//  Description   : Display all perfect numbers from linked list
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 17/12/2025
//
////////////////////////////////////////////////////////////////////////////

void DisplayPerfect(PNODE Head)
{
    int iNo = 0, iCnt = 0, iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            printf("%d\t", iNo);
        }
        Head = Head->Next;
    }
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

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    printf("Perfect Numbers : ");
    DisplayPerfect(First);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |11|->|28|->|17|->|41|->|6|->|89|
//  
//  Output :
//           Perfect Numbers : 28 6
//
////////////////////////////////////////////////////////////////////////////
