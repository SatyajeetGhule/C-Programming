////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    SumofEvenFactors
//  Description   :    Given a Number from user and disaplay on screen
//                     Sum of Even Factors.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/10/2025
//
////////////////////////////////////////////////////////////////////////////

int SumofEvenFactors(int iNo)
{
    int iCnt = 0, iEvenSum = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            if(iCnt % 2 == 0)
            {
                iEvenSum += iCnt;
            } 
        }
    }
    return iEvenSum;
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumofEvenFactors(iValue);
    printf("%d Sum of Even Factor is : %d",iValue, iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   12   Output  :      12
//  Input   :  -12   Output  :      12
//  Input   :   24   Output  :      32
//
////////////////////////////////////////////////////////////////////////////
