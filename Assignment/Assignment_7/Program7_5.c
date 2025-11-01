////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    MultipleDisplay
//  Description   :    Given a number from user and print first 5 multiples 
//                     of N number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    25/10/2025
//
////////////////////////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int Result = 0;
    
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        Result = iNo * iCnt;
        printf("%d\t",Result);
    }
    
    /*
    iCnt = 1;
    // second way... (Business Logic)
    while(iCnt <= 5)
    {
        Result = iNo * iCnt;
        iCnt++;
        printf("%d\t",Result);
    }
    */
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   4   Output  :   4 8 12 16 20
//  Input   :   8   Output  :   8 16 24 32 40
//  Input   :   6   Output  :   6 12 18 24 30
//
////////////////////////////////////////////////////////////////////////////