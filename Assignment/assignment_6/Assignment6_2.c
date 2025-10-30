////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    ChkGreater
//  Description   :    Given a number from user and check that number is
//                     greater than 100 or no.
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if( bRet == true)
    {
        printf("%d is Greater than 100\n",iValue);
    }
    else
    {
        printf("%d is Smaller than 100\n",iValue);
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :  -120      Output  :  -120 is Smaller than 100
//  Input   :   105      Output  :   105 is Greater than 100
//  Input   :   63       Output  :   63 is Smaller than 100
//
////////////////////////////////////////////////////////////////////////////