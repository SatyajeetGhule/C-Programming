////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    StrRevX
//  Description   :    Accept string from user reverse that string in place.
//  Input         :    String
//  Output        :    String
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    03/12/2025
//
////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *start = str;
    char *end = str, temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
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

    StrRevX(Arr);
    printf("Updated String is : %s\n",Arr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   Satya   Output  :   aytaS
//  Input   :   ABCD    Output  :   DCBA
//  Input   :   abba   Output  :    abba
//
////////////////////////////////////////////////////////////////////////////