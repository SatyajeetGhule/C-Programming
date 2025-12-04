 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckVowel
//  Description   :    accept string from user and check whether it contains
//                     vowels in it or not.
//  Input         :    String
//  Output        :    Boolean (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    29/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str =='a') || (*str =='e') || (*str =='i') || (*str =='o') || (*str =='u') ||
           (*str =='A') || (*str =='E') || (*str =='I') || (*str =='O') || (*str =='U'))
        {
            return true;
        }
        str++;
    }
    return false;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("Containce Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   “MarvellouS”        Output  :   Containce Vowel
//  Input   :   "SATYAjeet GHule"   Output  :   Containce Vowel
//  Input   :   "Xyz"               Output  :   There is no Vowel
//
////////////////////////////////////////////////////////////////////////////