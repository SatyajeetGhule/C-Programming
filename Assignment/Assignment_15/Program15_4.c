////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    MultDigits
//  Description   :    Given a Number from user and disaplay on screen
//                     print that Number Multiplication of all digits.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/10/2025
//
////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iMulti = 0, iDigit = 0;

    iMulti = 1;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit; 
        }
        iNo = iNo / 10;
    }
    return iMulti;    
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

    iRet = MultDigits(iValue);

    printf("%d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   9440    Output  :   144
//  Input   :   2395    Output  :   270
//  Input   :   1018    Output  :   8

//
////////////////////////////////////////////////////////////////////////////