////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountOdd
//  Description   :    Given a Number from user and disaplay on screen
//                     print that Number count of odd number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/10/2025
//
////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
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

    iRet = CountOdd(iValue);

    printf("%d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   1018    Output  :   2
//  Input   :  -1018    Output  :   2
//  Input   :   1357    Output  :   4
//  Input   :   2486    Output  :   0
//
////////////////////////////////////////////////////////////////////////////