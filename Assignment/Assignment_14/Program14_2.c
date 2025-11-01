////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    ChKZero
//  Description   :    Given a Number from user and disaplay on screen
//                     Check if it contains Zero or Not.
//  Input         :    Integer
//  Output        :    Boolean
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/10/2025
//
////////////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    int iChkDigit = 0;
   
    if(iNo == 0)
    {
        return true;
    }
    while (iNo != 0)
    {
        iChkDigit = iNo % 10;
        if(iChkDigit == 0)
        {
            return true;
            break;
        }
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
    bool bRet = false;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("%d : It Contains Zero\n",iValue);
    }
    else
    {
        printf("%d : There is No Zero\n",iValue);
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   1235     Output  :      There is No Zero
//  Input   :   1205     Output  :      It Contains Zero
//  Input   :   0        Output  :      It Contains Zero
//  Input   :   1        Output  :      There is No Zero
//  Input   :   -1654    Output  :      There is No Zero
//
////////////////////////////////////////////////////////////////////////////