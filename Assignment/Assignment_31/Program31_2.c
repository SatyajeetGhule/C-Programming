 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountChar
//  Description   :    Accept string from user and accept one character.
//                     Return frequency of that character.
//  Input         :    String, Charecter
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/11/2025
//
////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a Charecter :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Frequency of '%c' Charecter is : %d\n",cValue,iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :                           Output  :    
//          Enter a String :                   Frequency of '%c' Charecter is : 
//            Marvellous Multi OS                 2                        
//          
//          Enter a Charecter :
//              M
//
//  Input   :                           Output  :
//          Enter a String :                   Frequency of '%c' Charecter is : 
//            Marvellous Multi OS                 0
//          
//          Enter a Charecter :
//              W
//
////////////////////////////////////////////////////////////////////////////