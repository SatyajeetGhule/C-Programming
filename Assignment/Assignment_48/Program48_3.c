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
//  Description   : Write a program which accept one number from user and check
//                  9th or 12th bit is on or off.
//  Input         : Integer
//  Output        : Boolean
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT No)
{
    UINT Mask = 0;

    Mask = (1 << 8) | (1 << 11);

    if (No & Mask)
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
    UINT No = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%u", &No);

    bRet = ChkBit(No);

    if (bRet == 1)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("both bits OFF\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number : 257
//  Output  : 9th or 12th bit is ON
//
////////////////////////////////////////////////////////////////////////////////
