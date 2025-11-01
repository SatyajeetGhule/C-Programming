////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FindLagest
//  Description   :    Given three number from user and find lagest number
//                     between three numbers.
//  Input         :    Integer, Integer, Integer 
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int result = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    printf("Enter seconf Number :\n");
    scanf("%d",&iValue2);
    printf("Enter third Number :\n");
    scanf("%d",&iValue3);

    result = FindLargest(iValue1,iValue2,iValue3);

    printf("Largest Number is : %d",result);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12, 13, 14      Output  :   Largest Number is : 14
//  Input   :   16, -95, 68     Output  :   Largest Number is : 68
//  Input   :   -130, 0, -10    Output  :   Largest Number is : 0
//
////////////////////////////////////////////////////////////////////////////
