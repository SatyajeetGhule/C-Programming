////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplaySchedule
//  Description   :    Accept charecter from user and depends on division
//                     display exam timing
//  Input         :    Character
//  Output        :    void (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    switch(ch)
    {
        case 'A'  :
            printf("Your Exam at 7 AM\n");
            break;
        case 'B'  :
            printf("Your Exam at 8:30 AM\n");
            break;
        case 'C' :
            printf("Your Exam at 9:20 AM\n");
            break;
        case 'D' :
            printf("Your Exam at 10:30 AM\n");
            break;
        default :
            printf("Invalid Input...\n");
            break;
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

    printf("Enter Your Division like (A, B, C, D)\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :  a   Output  :  Your Exam at 7 AM.
//  Input   :  D   Output  :  Your Exam at 10:30 AM.
//  Input   :  g   Output  :  Invalid Input.
//  Input   :  5   Output  :  Invalid Input.
//
////////////////////////////////////////////////////////////////////////////