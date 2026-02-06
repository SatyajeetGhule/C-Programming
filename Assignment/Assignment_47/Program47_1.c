////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkBit
//  Description   : Write a program which accept one number & position from user &
//                  check whether bit at that position is on or of.if it is 1 return
//                  TRUE otherwise return FALSE.
//  Input         : Integer
//  Output        : Boolean
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL OnBit(UINT NO, int pos)
{
    UINT Mask = 0;

    Mask = 1 << (pos - 1);

    if ((NO & Mask) == Mask)
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
    UINT Pos = 0;
    UINT Ret = 0;

    printf("Enter the number : \n");
    scanf("%u", &No);

    printf("Enter the position : \n");
    scanf("%u", &Pos);

    Ret = OnBit(No, Pos);

    if (Ret == 1)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number : 10
//            Enter the position : 2
//  Ouptput : Bit is ON
//
////////////////////////////////////////////////////////////////////////////////
