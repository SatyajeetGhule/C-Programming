////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Percentage
//  Description   :    Given two number from user and calculate the marks 
//                     of Percentage.
//  Input         :    Integer, Integer
//  Output        :    Float
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    25/10/2025
//
////////////////////////////////////////////////////////////////////////////
float Percentage(int iNo1, int iNo2)
{
    float Result = 0.0f;

    if(iNo2 == 0)
    {
        return 0.0f;
    }

    Result = (iNo1 * 100) / (float)iNo2;
    return Result;

}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0f;

    printf("please enter your total Marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Calculation of marks is : %.2f %% \n",fRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   745, 1000   Output  :   74.50
//  Input   :   852, 1000   Output  :   85.20
//  Input   :   369, 0      Output  :   1
//
////////////////////////////////////////////////////////////////////////////
