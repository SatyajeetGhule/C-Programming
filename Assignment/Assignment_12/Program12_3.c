////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    SumofFactors
//  Description   :    Given a Number from user and disaplay on screen
//                     Sum of all factors of number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/10/2025
//
////////////////////////////////////////////////////////////////////////////

int SumofFactors(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
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

    iRet = SumofFactors(iValue);

    printf("%d Factors of Toatal Sum is : %d", iValue, iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   12    Output  :     16
//  Input   :   10    Output  :     08
//  Input   :  -15    Output  :     16
//
////////////////////////////////////////////////////////////////////////////
