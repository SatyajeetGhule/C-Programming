 ////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountCapital
//  Description   :    Accept String from user and count number of capital
//                     charecter.
//  Input         :    String (Array)
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    28/11/2025
//
////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    
    while(*str != 0)
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);
    printf("Capital charecter is : %d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   “Marvellous Multi OS”   Output  :   Capital charecter is : 4
//  Input   :   "SatyaJeet Ghule"       Output  :   Capital charecter is : 3
//
////////////////////////////////////////////////////////////////////////////
