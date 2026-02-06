////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkBit
//  Description   : Write a program which checks whether 7th & 8th & 9th bit is
//                  ON or OFF.
//  Input         : Integer
//  Output        : Boolean
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT NO)
{
    UINT Mask = 0;
    UINT Result = 0;

    Mask = 0x000001C0;

    Result = NO & Mask;

    if (Result == Mask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iNo = 0;
    BOOL iRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    iRet = ChkBit(iNo);

    if (iRet == TRUE)
    {
        printf("7th, 8th and 9th bits are ON\n");
    }
    else
    {
        printf("7th, 8th and 9th bits are OFF\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number :  448
//  Ouptput : 7th, 8th and 9th bits are ON
//
////////////////////////////////////////////////////////////////////////////////
