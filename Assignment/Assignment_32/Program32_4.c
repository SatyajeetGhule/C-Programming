////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    StrCpySmall
//  Description   :    Accept string from user and copy that characters of
//                     that string into another string by converting all capital
//                     characters into small case.
//  Input         :    String
//  Output        :    String
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    04/12/2025
//
////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *str, char *dest)
{
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
        }
        else
        {
            *dest = *str;
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

    StrCpySmall(Arr, Brr);
    printf("Old String is : %s\n",Arr);
    printf("String Converted into Small case : %s\n",Brr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   Satyajeet Ghule     Output  :   satyajeet ghule
//  Input   :   Marvellous Python   Output  :   marvellous python
//
////////////////////////////////////////////////////////////////////////////