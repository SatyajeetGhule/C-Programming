////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckCapital
//  Description   :    Accept charecter from user and check whether it is    
//                     chapital or not.
//  Input         :    Charecter
//  Output        :    Charecter ( print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
    char cValue ='\0';
    bool bRet = false;

    printf("Enter a charecter :\n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c It is Capital Character\n",cValue);
    }
    else
    {
        printf("%c It is not Capital Charecter\n",cValue);
    }
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   S  Output  :  S It is Capital Character
//  Input   :   @  Output  :  @ It is not Capital Charecter
//  Input   :   3  Output  :  3 It is not Capital Charecter
//
////////////////////////////////////////////////////////////////////////////