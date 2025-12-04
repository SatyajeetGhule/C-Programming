 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayDigit
//  Description   :    Accept string from user and count number of white spaces
//  Input         :    String
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/11/2025
//
////////////////////////////////////////////////////////////////////////////

int DisplayDigit(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {        
        if(*str == ' ')
        {
            iCount++;
        }
        *str++;
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = DisplayDigit(Arr);

    printf("Count total Spaces in String is : %d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   Demo 123 xyz           Output  :   2
//  Input   :   X1y2z3                 Output  :   0
//
////////////////////////////////////////////////////////////////////////////