////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    RangeDisplay
//  Description   :    Given Tow Number from user and print range first number to    
//                     last number.
//  Input         :    Interger
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    27/10/2025
//
////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart >= iEnd)
    {
        printf("Invalid Range\n");
    }
    for(iStart; iStart <= iEnd; iStart++)
    {
        printf("%d\t",iStart);
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

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    5, 12   Output  :  5 6 7 8 9 10 11 12
//  Input   :   10, 15   Output  :  10 11 12 13 14 15
//  Input   :   12, 05   Output  :  Invalide Range
//
////////////////////////////////////////////////////////////////////////////