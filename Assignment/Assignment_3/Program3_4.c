/////////////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayConvert
//  Description   :    Given 1 character form user and Convert the Uper-Case
//  Input         :    Character 
//  Output        :    Character
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    if(cValue >= 'a' &&  cValue <='z')
    {
        cValue = cValue - 32;
        printf("Convert Character is : %c",cValue);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        //char cChar = cValue + 32;
        printf("You are already typing Capital Latter : %c",cValue);
    }
    else
    {
        printf("Invalid Input Not Allowed 'Numbers And Symboll' ");
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function For This Application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld This Application
//
//  Input   :   a       Output  :   A
//  Input   :   A       Output  :   You are already typing Capital Latter : A
//  Input   :   #       Output  :   Ivalid Input Not Allowed 'Numbers And Symboll'
//  Input   :   1       Output  :   Ivalid Input Not Allowed 'Numbers And Symboll'
//
///////////////////////////////////////////////////////////////////////////////////// +6
