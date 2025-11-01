////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    SumNaturalNum
//  Description   :    Given a Number from user and disaplay on screen
//                     print sum of all first Naturalnumber.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/10/2025
//
////////////////////////////////////////////////////////////////////////////

int SumNaturalNumber(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = SumNaturalNumber(iValue);

    printf("Sum of first %d natual Numbers is : %d\n",iValue, iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :  12   Output  :   78
//  Input   :  10   Output  :   55
//  Input   : -10   Output  :   55
//
////////////////////////////////////////////////////////////////////////////
