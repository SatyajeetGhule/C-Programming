////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Multiply
//  Description   :    Given three number from user and print its 
//                     multiplication.
//  Input         :    Integer, Integer, Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int Result = 0;

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    Result = (iNo1 * iNo2) * iNo3;

    return Result;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    int iRet = 0;

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three Numbers : %d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   : 5, 4, 7        Output  :  Multiplication of three Numbers :140
//  Input   : 5, 0, 7        Output  :  Multiplication of three Numbers : 35
//  Input   : 5, 0, 0        Output  :  Multiplication of three Numbers : 05
//
////////////////////////////////////////////////////////////////////////////
