////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef unsigned int UINT;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CommonBits
//  Description   : Write a program which accept two number from user and display
//                  position of common ON bits from that two numbers.
//  Input         : Integer
//  Output        : Integer
//  Author        : Satyajeet Manohar Ghule
//  Date          : 05/02/2026
//
////////////////////////////////////////////////////////////////////////////////

void CommonBits(UINT No1, UINT No2)
{
    UINT temp = No1 & No2;
    int iPos = 1;

    while (temp != 0)
    {
        if (temp & 1)
        {
            printf("Number of common bits is : %d\n", iPos);
        }

        temp = temp >> 1;
        iPos++;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT No1 = 0, No2 = 0;

    printf("Enter first number : \n");
    scanf("%u", &No1);

    printf("Enter second number : \n");
    scanf("%u", &No2);

    CommonBits(No1, No2);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter first number : 10
//            Enter second number : 15
//  Output  : Number of common bits is : 2
//            Number of common bits is : 4
//
////////////////////////////////////////////////////////////////////////////////
