////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    EvenFactorial
//  Description   :    Given a Number from user and disaplay Multiplication   
//                     of even number of factorial.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    26/10/2025
//
////////////////////////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
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
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial number is : %d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   5   Output  :   8
//  Input   :  -5   Output  :   8
//  Input   :  10   Output  :   3840
//
////////////////////////////////////////////////////////////////////////////