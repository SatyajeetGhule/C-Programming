////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckNumberType
//  Description   :    Given number from user and check that number is 
//                     positive, negative or Zero.
//  Input         :    Integer 
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("%d is Positive Number\n",iNo);
    }
    else if (iNo < 0)
    {
        printf("%d is Negative Number\n",iNo);
    }
    else
    {
        printf("%d is Zero Number\n",iNo);
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

    CheckNumberType(iValue);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12      Output  :
//  Input   :   10      Output  :
//  Input   :   13      Output  :
//
////////////////////////////////////////////////////////////////////////////