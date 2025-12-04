 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Display
//  Description   :    Accept character from user and display its ASCII 
//                     value in decimal, octal and hexadecimal format.                    
//  Input         :    Character
//  Output        :    Charecter
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'a' && ch <= 'z') || ( ch >= 65 && ch <= 90))
    {
        ch = ch - 32;
        printf("Decimal : %d\n",ch);
        printf("Octal : 0%o\n",ch);
        printf("Hrxadecimal : 0X%x",ch);
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

    printf("Enter a Charecter :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   A   Output  :    Decimal : 65
//                               Octal : 0101
//                               Hrxadecimal : 0X41
//
//  Input   :   s   Output  :    Decimal : 83
//                               Octal : 0123
//                               Hrxadecimal : 0X53
//
//  Input   :   4   Output  :    Terminate code
//
////////////////////////////////////////////////////////////////////////////


