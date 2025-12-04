////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    StrCpy
//  Description   :    Accept string from user and copy that characters of
//                     that string into another string by removing all white
//                     spaces.
//  Input         :    String
//  Output        :    String
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    03/12/2025
//
////////////////////////////////////////////////////////////////////////////

void StrCpy(char *str, char *dest)
{
    char *temp = dest;
    
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *temp = *str;
            temp++;
        }
        str++;        
    } 
    *temp = '\0';
      
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
    printf("Removed White Spaces in String : %s\n",Brr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   Satyajeet Ghule     Output  :   SatyajeetGhule
//  Input   :   Marvellous Python   Output  :   MarvellousPython
//
////////////////////////////////////////////////////////////////////////////