 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Display
//  Description   :    Accept charecter from user. If it is capital then 
//                     display all the characters from the input characters 
//                     till Z. If input character is small then print all
//                     the characters in reverse order till a. In other cases
//                     return directly.                     
//  Input         :    Character
//  Output        :    Charecter
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Dispaly(char ch)
{
    char c = '\0';
    if(ch >= 'A' && ch <= 'Z')
    {
        for(c = ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(c = ch; c >= 'a'; c--)
        {
            printf("%c\t",c);
        }
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

    printf("Enter a charecter :\n");
    scanf("%c",&cValue);

    Dispaly(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   V  Output  :  v W X Y Z
//  Input   :   h  Output  :  h g f e d c b a
//  Input   :   4  Output  :  terminate code
//
////////////////////////////////////////////////////////////////////////////