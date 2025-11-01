////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountRange
//  Description   :    Given a Number from user and disaplay on screen
//                     print the count of digits in between 3 and 7.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/10/2025
//
////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt = 0, iDigit = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 6) )
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;    
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Numbe :\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   9922    Output  :   0
//  Input   :   4521    Output  :   2
//  Input   :   1018    Output  :   0
//  Input   :   2395    Output  :   1
//
////////////////////////////////////////////////////////////////////////////