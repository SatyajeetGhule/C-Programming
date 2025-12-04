////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    StrCpyToggle
//  Description   :    Accept string from user and copy that characters of
//                     that string into another string by toggling the case.
//  Input         :    String
//  Output        :    String
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    04/12/2025
//
////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *str, char *dest)
{
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *dest = *str - 32;
        }
        dest++;
        str++;
    }
    *dest = '\0';
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

    StrCpyToggle(Arr, Brr);
    printf("Old String is : %s\n",Arr);
    printf("String Converted into Toggle case : %s\n",Brr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   Satyajeet GHULE     Output  :   sATYAJEET ghule
//  Input   :   MarvelLOUS Python   Output  :   mARVELlous pYTHON
//
////////////////////////////////////////////////////////////////////////////