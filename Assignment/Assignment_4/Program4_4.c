////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    SumNonFact
//  Description   :    Given Number From User and Display Summition of
//                     Non factors
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt= 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;            
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
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    int iRet = SumNonFact(iValue);

    printf("Summition of non Factors : %d",iRet);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12      Output  :   50
//  Input   :   10      Output  :   37
//  Input   :   13      Output  :   77
//
////////////////////////////////////////////////////////////////////////////
