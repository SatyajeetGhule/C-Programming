////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DividedByFive
//  Description   :    Given a Number from user and disaplay on screen
//                     check if Number is Divided by 5.
//  Input         :    Integer
//  Output        :    Boolean
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/10/2025
//
////////////////////////////////////////////////////////////////////////////

bool DividedByFive(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
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

    iRet = DividedByFive(iValue);

    if(iRet == true)
    {
        printf("YES, %d is Divided by 5.",iValue);
    }
    else
    {
        printf("NO, %d is Not Divided By 5.",iValue);
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   05    Output  :     YES
//  Input   :   12    Output  :     No
//  Input   :   10    Output  :     YES
//
////////////////////////////////////////////////////////////////////////////
