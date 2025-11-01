////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountTow
//  Description   :    Given a Number from user and disaplay on screen
//                     print That contains digit 2 how many times.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/10/2025
//
////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10 ;
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

    iRet = CountTwo(iValue);

    printf("That Number Contains Digit 2 : %d Times\n",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    1221   Output  :   That Contains Digit 2 : 2 Times
//  Input   :   -1222   Output  :   That Contains Digit 2 : 3 Times
//  Input   :    0000   Output  :   That Contains Digit 2 : 0 Times
//
////////////////////////////////////////////////////////////////////////////