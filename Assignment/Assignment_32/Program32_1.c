////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    StrCpyRev
//  Description   :    Accept string from user and copy that characters of
//                     that string into another string in reverse order.
//  Input         :    String
//  Output        :    String
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    03/12/2025
//
////////////////////////////////////////////////////////////////////////////

void StrCpyRev(char *str, char *dest)
{
    char *temp = dest;
    char *start = dest;
    char *end = dest;
    char ch = '\0';
    while(*str != '\0')
    {
        *temp = *str;
        str++;
        temp++;
    } 
    *temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        ch = *start;
        *start = *end;
        *end = ch;

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
    char Arr[30];
    char Brr[30];
    
    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyRev(Arr, Brr);
    printf("Old String is : %s\n",Arr);
    printf("Copy String is : %s\n",Brr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   Satyajeet Ghule     Output  :   eluhG teejaytaS
//  Input   :   Marvellous Python   Output  :   nohtyP suollevraM
//
////////////////////////////////////////////////////////////////////////////
