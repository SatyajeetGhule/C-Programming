 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Display
//  Description   :    Accept charecter from user, if charecter small display
//                     corresponding capital and if capital display small.
//  Input         :    Character
//  Output        :    void (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }    
    printf("%c\n",ch);
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter a Character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   s   Output  :   S
//  Input   :   A   Output  :   a
//  Input   :   %   Output  :   %
//  Input   :   5   Output  :   5
//
////////////////////////////////////////////////////////////////////////////