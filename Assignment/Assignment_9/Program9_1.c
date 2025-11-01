////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Display
//  Description   :    Given a number from user and print # and * 
//                     3  = ( # # # * * *).
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    25/10/2025
//
////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0 ;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
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

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   3    Output  :  # # # * * *
//  Input   :   5    Output  :  # # # # # * * * * *
//  Input   :   6    Output  :  # # # # # # * * * * * *
//
////////////////////////////////////////////////////////////////////////////