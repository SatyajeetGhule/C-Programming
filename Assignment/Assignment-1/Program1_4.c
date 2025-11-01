
////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Check
//  Description   :    check whether is is divisible by 5 or not.
//  Input         :    Integer 
//  Output        :    Boolean
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/10/2025
//
////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;    
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    bool bRet = 0;

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5",iValue);
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   3       Output  :   3 is not Divisible by 5.
//  Input   :   1       Output  :   1 is not divisible by 5.
//  Input   :   0       Output  :   0 is Divisible by 5.
//  Input   :   5       Output  :   5 is Divisible by 5.
//
////////////////////////////////////////////////////////////////////////////
