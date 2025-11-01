////////////////////////////////////////////////////////////////////////////
//
//  Request Header File
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FactorialDiff
//  Description   :    Given a Number from user and disaplay Difference
//                     of Even and Odd number factorial.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    26/10/2025
//
////////////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int eFact = 0, oFact = 0;
    eFact = 1;
    oFact = 1;
    
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            eFact = eFact * iCnt;
        }
        else
        {
            oFact = oFact * iCnt;
        }
    }
    return eFact - oFact;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d", iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    5   Output  :  -7
//  Input   :   -5   Output  :  -7
//  Input   :    10  Output  :  2895
//
////////////////////////////////////////////////////////////////////////////
