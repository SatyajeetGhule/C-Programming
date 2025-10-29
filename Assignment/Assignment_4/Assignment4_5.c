////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    MultFact
//  Description   :    Given Number From User and Display return difference 
//                     bitween summition of all its factors and non-factors
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt< iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    }
    for (iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    
    return iSumFact - iSumNonFact;
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

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12      Output  :   -34
//  Input   :   10      Output  :   -29
//  Input   :   13      Output  :   -76
//
////////////////////////////////////////////////////////////////////////////