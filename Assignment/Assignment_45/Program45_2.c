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
//  Description   : Write a program which checks whether 5th & 18th bit is ON or OFF.
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

    Mask = 0x00020010;

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
        printf("5th and 18th bit is ON");
    }
    else
    {
        printf("5th and 18th bit is OFF");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number :  131088
//  Ouptput : 5th & 18th bit is ON
//
//  Input   : Enter the number : 16
//  Ouptput : 5th & 18th bit is OFF
//
////////////////////////////////////////////////////////////////////////////////
