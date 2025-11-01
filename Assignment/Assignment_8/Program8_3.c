////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Factorial
//  Description   :    Accept a Number from user and print that number 
//                     Factorial.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    25/10/2025
//
////////////////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int Fact = 0;

    Fact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        Fact = Fact * iCnt;
    }
    return Fact;
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

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("%d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   5     Output  :     120
//  Input   :  -5     Output  :     120
//  Input   :   4     Output  :     24
//
////////////////////////////////////////////////////////////////////////////