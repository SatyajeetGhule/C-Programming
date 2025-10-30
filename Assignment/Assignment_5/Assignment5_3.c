////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckLeapYear
//  Description   :    Given Year-number from user and check that year is 
//                     Leap or Not.
//  Input         :    Integer 
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYr)
{
    if((iYr % 4 == 0)  || (iYr % 400 == 0) && (iYr % 100 != 0))
    {
        printf("%d is Leap Year\n",iYr);
    }
    else
    {
        printf("%d is Not a Leap Year\n",iYr);
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter any Year :\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   2024      Output  :     2024 is Leap Year
//  Input   :   2029      Output  :     2029 is Not a Leap Year
//  Input   :   1900      Output  :     1900 is Not a Leap Year
//
////////////////////////////////////////////////////////////////////////////