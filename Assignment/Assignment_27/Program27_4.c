////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckSmall
//  Description   :    Accept character from user and check whether it is
//                     check small case or not.
//  Input         :    Character
//  Output        :    Boolean (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckSamll(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    printf("Enter a charecter :\n");
    scanf("%c",&cValue);

    bRet = CheckSamll(cValue);

    if(bRet == true)
    {
        printf("%c It is Small Character\n",cValue);
    }
    else
    {
        printf("%c It is not Small Charecter\n",cValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :  A   Output  :  A It is not Small Character
//  Input   :  s   Output  :  s It is Small Charecter
//  Input   :  0   Output  :  0 It is not Small Charecter
//
////////////////////////////////////////////////////////////////////////////