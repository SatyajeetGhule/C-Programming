////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FhtoCs
//  Description   :    Given tow Number from user and print on screen    
//                     range even number First Number to last number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    27/10/2025
//
////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart >= iEnd)
    {
        printf("Invalid Range...");
    }
    for(iStart; iStart <= iEnd; iStart++)
    {
        if(iStart % 2 == 0)
        {
            printf("%d\t", iStart);
        }
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter second Number :\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    5, 20   Output  :  6 8 10 12 14 16 18 20
//  Input   :   10, 18   Output  :  10 12 14 16 18
//  Input   :   90, 15   Output  :  Invalid Range...
//
////////////////////////////////////////////////////////////////////////////