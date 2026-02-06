////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ToggleBitRange
//  Description   : Write a program which accept one number from user and range
//                  of position from user.Toggle all bits from that range.
//  Input         : Integer, Start position, End position
//  Output        : Integer
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

UINT ToggleBitRange(UINT No, UINT Start, UINT End)
{
    UINT Mask = 0;

    if (Start < 1 || Start > 32 || Start > End)
    {
        return No;
    }

    for (UINT i = Start; i <= End; i++)
    {
        Mask = Mask | (1 << (i - 1));
    }

    return No ^ Mask;
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
    UINT Result = 0;

    printf("Enter the number : \n");
    scanf("%u", &No);

    printf("Enter Starting Position : \n");
    scanf("%u", &Pos1);

    printf("Enter Ending Position : \n");
    scanf("%u", &Pos2);

    Result = ToggleBitRange(No, Pos1, Pos2);

    printf("Number after toggle : %u\n", Result);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the number : 897
//            Enter Strting Position : 9
//            Enter Ending Position : 13
//  Output  : Number after toggle : 7297
//
////////////////////////////////////////////////////////////////////////////////
