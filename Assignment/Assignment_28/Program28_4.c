 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckSpecial
//  Description   :    Accept charecter from user and check whether it is 
//                     special symbol or not (!, @, #, $, %, ^, &, *).                     
//  Input         :    Character
//  Output        :    Boolean
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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

    bRet = CheckSpecial(cValue);

    if (bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   @  Output  :  True
//  Input   :   8  Output  :  False
//  Input   :   A  Output  :  False
//
////////////////////////////////////////////////////////////////////////////