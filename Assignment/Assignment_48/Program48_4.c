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
//  Description   : Write a program which accept one number, two position from
//                  user and check whether bit at 1st or bit 2nd position is on or off.
//  Input         : Integer
//  Output        : Boolean
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT No, UINT Pos1, UINT Pos2)
{
    if (Pos1 < 1 || Pos1 > 32 || Pos2 < 1 || Pos2 > 32)
    {
        printf("Invalid Position\n");
        return FALSE;
    }

    UINT Mask1 = 0;
    UINT Mask2 = 0;

    Mask1 = (1 << (Pos1 - 1));
    Mask2 = (1 << (Pos2 - 1));

    if ((No & Mask1) || (No & Mask2))
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
    UINT Pos1 = 0, Pos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%u", &No);

    printf("Enter First Position : \n");
    scanf("%u", &Pos1);

    printf("Enter Second Position : \n");
    scanf("%u", &Pos2);

    bRet = ChkBit(No, Pos1, Pos2);

    if (bRet == 1)
    {
        printf("%uth or %uth bit is ON\n", Pos1, Pos2);
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
//  Input   : Enter the number : 10
//            Enter First Position : 3
//            Enter Second Position : 7
//  Output  : both bits OFF
//
////////////////////////////////////////////////////////////////////////////////
