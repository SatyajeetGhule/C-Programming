////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    
//  Description   :    Given two Number from user and disaplay on screen
//                     bitween that both number Range reverse order.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    27/10/2025
//
////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart >= iEnd+1)
    {
        printf("Invalid Range...\n");
    }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
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

    printf("Enter First number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second number :\n");
    scanf("%d",&iValue2);
    
    RangeDisplayRev(iValue1, iValue2);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   01, 10   Output  :  10 9 8 7 6 5 4 3 2 1 
//  Input   :   15, 20   Output  :  20 19 18 17 16 15
//  Input   :   10, 10   Output  :  10
//  Input   :  -10, 05   Output  :  5 4 3 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
//  Input   :   20, 11   Output  :  Invalid Range...
//
////////////////////////////////////////////////////////////////////////////
