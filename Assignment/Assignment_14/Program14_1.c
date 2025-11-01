////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayDigit
//  Description   :    Given a Number from user and disaplay on screen
//                     its digit reverse order.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/10/2025
//
////////////////////////////////////////////////////////////////////////////

void DispalyDigit(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    DispalyDigit(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    123   Output  :    321
//  Input   :   -1524  Output  :    4251
//  Input   :    9009  Output  :    9009
//
////////////////////////////////////////////////////////////////////////////