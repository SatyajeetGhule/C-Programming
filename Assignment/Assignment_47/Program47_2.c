////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : OffBit
//  Description   : Write a program which accept one number & position from user
//                  and off that bit.Return Modified number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT NO, int pos)
{
    UINT Mask = 0;

    Mask = 1 << (pos - 1);
    Mask = ~Mask;

    return (NO & Mask);
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

    Ret = OffBit(No, Pos);

    if (Ret == 1)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    printf("Modified number is : %u\n", Ret);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number : 10
//            Enter the position : 2
//  Ouptput : Bit is Off
//  Output  : Modified number is : 8
//
////////////////////////////////////////////////////////////////////////////////
