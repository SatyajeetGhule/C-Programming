////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckDigit
//  Description   :    Accept character from user and check whether it is
//                     Digit or not.
//  Input         :    Character
//  Output        :    Boolean (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
    char cValue = '\0';
    bool bRet = false;
    
    printf("Enter a Digit :\n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("%c It is a Digit\n",cValue);
    }
    else
    {
        printf("%c It is not a Digit\n",cValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :  3   Output  :  3 It is a Digit
//  Input   :  S   Output  :  S It is not a Digit
//  Input   :  $   Output  :  $ It is not a Digit
//
////////////////////////////////////////////////////////////////////////////