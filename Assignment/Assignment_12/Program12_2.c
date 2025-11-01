////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountFactors
//  Description   :    Given a Number from user and disaplay on screen
//                     Count total Factors of Number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/10/2025
//
////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCont= 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCont++;
        }

    }
    return iCont;
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

    iRet = CountFactors(iValue);
    
    printf("%d Count Factors Number : %d",iValue, iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   12   Output  :  6
//  Input   :   10   Output  :  4
//  Input   :  -12   Output  :  6
//  Input   :   30   OutPut  :  8
//
////////////////////////////////////////////////////////////////////////////