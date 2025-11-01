////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountDiff
//  Description   :    Given a Number from user and difference between return
//                     summation of even digits and summation of odd digits.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    30/10/2025
//
////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iEvenDigit = 0,iOddDigit = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2 ) == 0)
        {
            iEvenDigit += iDigit;
        }
        else
        {
            iOddDigit += iDigit;
        }
        iNo = iNo / 10;
    }
    return iEvenDigit - iOddDigit;    
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   2395    Output  :   -15
//  Input   :   1018    Output  :    06
//  Input   :   8440    Output  :    16
//  Input   :   5733    Output  :   -18
//
////////////////////////////////////////////////////////////////////////////

