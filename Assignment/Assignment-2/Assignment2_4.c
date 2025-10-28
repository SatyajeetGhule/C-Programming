////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Display
//  Description   :    Given two numbers from user and 
//                     display first number in second number of times.
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/10/2025
//
////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int icnt = 0;
    
    if(iFrequency <= 0)
    {
        iFrequency = -iFrequency;
    }
    printf("-----------------------------------------\n");
    for(icnt = 1; icnt <= iFrequency; icnt++)
    {
        printf("%d\t",iNo);
    }
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iCount = 0;
    
    printf("Enter a Number :\n");
    scanf("%d",&iValue);
    printf("Enter Frequency Number :\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);
     return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   24, 6       Output  :   24 24 24 24 24 24
//  Input   :  -24, 3       Output  :   -24 -24 -24
//  Input   :   12, -3      Output  :   12 12 12
//  Input   :   0, 0        Output  :   Terminate The Application
//
////////////////////////////////////////////////////////////////////////////