 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Difference
//  Description   :    Accept String from user.return difference between
//                     frequency of small characters and frequency of
//                     capital characters.
//  Input         :    String
//  Output        :    Charecter
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt1 = 0, iCnt2 = 0, dif = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt1++;      
        }
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt2++;      
        }
        *str++;
        dif = iCnt1 - iCnt2;   
    }    
    return dif;    
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

    printf("Enter a String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    if(iRet < 0)
    {
        iRet = -iRet;
    }
    printf("Difference is : %d",iRet);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   “MarvellouS”        Output  :   Difference is : 6 
//  Input   :   "SATYAjeet GHule"   Output  :   Difference is : 0
//
////////////////////////////////////////////////////////////////////////////