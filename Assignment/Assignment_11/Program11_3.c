////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    RangeSum
//  Description   :    Given two Number from user and print range of additon     
//                     First number to last number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    27/10/2025
//
////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd <0)
    {
        printf("Invalid Range...\n");
        return -1;
    }
    if(iStart >= iEnd)
    {
        printf("Invalid Range...\n");
        return -1;
    }
    for(iCnt = iStart ; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }
    return iSum;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    
    if(iRet == -1)
    {
        return 0;
    }
    printf("%d to %d Range of Sum is : %d",iValue1, iValue2, iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   10, 18   Output  :  126  
//  Input   :  -10, 02   Output  :  Invalid Range...
//  Input   :   23, 30   Output  :  212
//  Input   :   90, 12   OutPut  :  Invalid Range...
//
////////////////////////////////////////////////////////////////////////////