 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FirstChar
//  Description   :    Accept string from user and accept one character.
//                     Return index of first occurrence of that character.
//  Input         :    String, Charecter
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    01/12/2025
//
////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount = 0, iCnt = 0;
        
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            iCount = iCnt;
            break;
        }
        else
        {
            iCount = -1;
        }
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

    iRet = FirstChar(Arr,cValue);

    printf("Index of '%c' Charecter is : %d\n",cValue,iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :                           Output  :    
//          Enter a String :                   Index of 'M' Charecter is : 
//            Marvellous Multi OS                 0                        
//          
//          Enter a Charecter :
//              M
//
//  Input   :                           Output  :
//          Enter a String :                   Index of 'W' Charecter is : 
//            Marvellous Multi OS                 -1
//          
//          Enter a Charecter :
//              W
//
//  Input   :                           Output  :
//          Enter a String :                   Index of 'e' Charecter is : 
//            Marvellous Multi OS                 4
//          
//          Enter a Charecter :
//              e
//
////////////////////////////////////////////////////////////////////////////