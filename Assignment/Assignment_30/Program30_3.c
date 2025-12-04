 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    strtoggleX
//  Description   :    accept string from user and toggle the case.
//  Input         :    String
//  Output        :    void (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/11/2025
//
////////////////////////////////////////////////////////////////////////////

void strtoggleX(char *str)
{
    while(*str != '\0')
    {        
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        *str++;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    
    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Update String : %s",Arr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   MarvellouS              Output  :   mARVELLOUs
//  Input   :   Xyz                     Output  :   xYZ
//  Input   :   Maevellous Multi OS     Output  :   mARVELLOUS mULTI os
//
////////////////////////////////////////////////////////////////////////////