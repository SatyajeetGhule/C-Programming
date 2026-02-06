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
//  Description   : Write a program which checks whether first & last bit is ON
//                  OFF.First bit means bit number 1 & last bit means bit number 32.
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

    Mask = 0x80000001;

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
    scanf("%u", &iNo);

    iRet = ChkBit(iNo);

    if (iRet == TRUE)
    {
        printf("First and last bits are ON\n");
    }
    else
    {
        printf("First and last bits are OFF\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number :  2147483649
//  Ouptput : First and last bits are ON
//
////////////////////////////////////////////////////////////////////////////////
