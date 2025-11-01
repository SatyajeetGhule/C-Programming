////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FindMax
//  Description   :    Given two number from user and find maximum of tow
//                     number.
//  Input         :    Integer, Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    int iRet = 0;
    if(iNo1 <= iNo2)
    {
        iRet = iNo2;
    }
    else if (iNo1 >= iNo2)
    {
        iRet = iNo1;
    }
    return iRet;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, result = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    result = FindMax(iValue1, iValue2);

    printf("Maximum Number is : %d",result);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12, 36      Output  :   Maximum Number is : 36
//  Input   :   25, 10      Output  :   Maximum Number is : 25
//  Input   :   13, 66      Output  :   Maximum Number is : 13
//
////////////////////////////////////////////////////////////////////////////
