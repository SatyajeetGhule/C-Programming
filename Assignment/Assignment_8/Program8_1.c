////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Number
//  Description   :    Given a number from user and print if less than 50  
//                     is Small and if Number is Greater than 50 and less 
//                     than 100 is Medium and that number is Greater than 
//                     100 is Large Number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    25/10/2025
//
////////////////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else if(iNo >= 101)
    {
        printf("Large\n");
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

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   48      Output  :   Small
//  Input   :   63      Output  :   Medium
//  Input   :   105     Output  :   Large
//
////////////////////////////////////////////////////////////////////////////