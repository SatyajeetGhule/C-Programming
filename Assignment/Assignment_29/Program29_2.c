 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountSmall
//  Description   :    Accept String from User and Display Count Small 
//                     Charecter.
//  Input         :    String
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
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

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Count Small Charecter : %d",iRet);
    return 0;

}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   “Marvellous”            Output  :  Count Small Charecter : 9
//  Input   :   “Marvellous Multi OS”   Output  :  Count Small Charecter : 13
//  Input   :   "SATYAJEET"             Output  :  Count Small Charecter : 0
//
////////////////////////////////////////////////////////////////////////////

