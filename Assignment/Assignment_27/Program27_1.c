////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckAlphabet
//  Description   :    Accept character from user and check whether it is   
//                     alphabet or not.
//  Input         :    Character
//  Output        :    Boolean (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckAlphabet(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckAlphabet(cValue);

    if(bRet == true)
    {
        printf("%c It is an Alphabet\n",cValue);
    }
    else
    {
        printf("%c It is not an Alphabet\n",cValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   A  Output  :  A It is an Alphabet
//  Input   :   z  Output  :  z It is an Alphabet
//  Input   :   5  Output  :  5 It is not an Alphabet
//  Input   :   %  Output  :  % It is not an Alphabet
//
////////////////////////////////////////////////////////////////////////////
