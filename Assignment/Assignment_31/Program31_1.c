 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckChar
//  Description   :    accept string from user and accept one character.
//                     Check whether that character is present in string or not.
//  Input         :    String, Charecter
//  Output        :    Boolean (Print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        *str++;
    }
    return false;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;
    
    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a Charecter :\n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Charecter Found : %c\n",cValue);
    }
    else
    {
        printf("Charecter not Found : %c\n",cValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :                           Output  :    
//          Enter a String :                    Charecter Found : 2 
//            Satyajeet123                                          
//          
//          Enter a Charecter :
//              2
//
//  Input   :                           Output  :
//          Enter a String :                    Charecter not Found : Z 
//            Satyajeet                                          
//          
//          Enter a Charecter :
//              Z
//
////////////////////////////////////////////////////////////////////////////
