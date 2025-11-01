////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountFour
//  Description   :    Given a Number from user and disaplay on screen
//                     print That Number Contains 4 how many times.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/10/2025
//
////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCnt = 0, iDigit = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("That Number Contains 4 is : %d Times",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    4444   Output  :   That Number Contains 4 is : 4 Times
//  Input   :    1234   Output  :   That Number Contains 4 is : 1 Times
//  Input   :   -1256   Output  :   That Number Contains 4 is : 0 Times
//
////////////////////////////////////////////////////////////////////////////