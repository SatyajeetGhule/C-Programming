//////////////////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
//////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    ChkVowel
//  Description   :    Given Number From User and Check that Character is Vowel or not
//  Input         :    Character 
//  Output        :    Boolean
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    23/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////
BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter a Character for Checkeing its Vowel or Not :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c Character is a Vowel\n",cValue);
    }
    else
    {
        printf("%c Character is Not Vowel\n",cValue);
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   A       Output  :  A Character is Vowel   
//  Input   :   b       Output  :  b Character is Not Vowel
//
//////////////////////////////////////////////////////////////////////////////////////////
