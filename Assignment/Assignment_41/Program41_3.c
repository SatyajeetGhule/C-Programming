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
//  Function Name : SumDigits
//  Description   : Sum of Digit of Each Node.
//  Input         : Pointer to head
//  Output        : Display on screen
//  Author        : Satyajeet Manohar Ghule
//  Date          : 01/01/2026
//
////////////////////////////////////////////////////////////////////////////

void SumDigits(PNODE first)
{
    int iDigit = 0, iSum = 0;
    
    while(first != NULL)
    {
        iDigit = first->Data;
        iSum = 0;

        while(iDigit != 0)
        {
            iSum = iSum + (iDigit%10);
            iDigit = iDigit / 10;
        }
        printf("Sum of digits of %d : %d\n", first->Data, iSum);
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

    SumDigits(head);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : |2229|->|320|->|95|->|226|->|0|->|230|->NULL
//  
//  Output :
//           Sum of digits of 2559 : 21
//           Sum of digits of 320 : 5
//           Sum of digits of 95 : 14
//           Sum of digits of 266 : 14
//           Sum of digits of 0 : 0
//           Sum of digits of 230 : 5
//              
////////////////////////////////////////////////////////////////////////////