////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    RangeSumEven
//  Description   :    Given two Number from user and disaplay on screen    
//                     Addition Even range First number to last number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    27/10/2025
//
////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range...\n");
        return -1;
    }
    if(iStart >= iEnd)
    {
        printf("Invalid Range...\n");
        return -1;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum += iCnt;
        }
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
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Fisrt Number :\n");
    scanf("%d",&iValue1);

    printf("Enter second Number :\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        return 0;
    }

    printf("Addition of Even Range is : %d",iRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    23, 30   Output  :     108
//  Input   :   -20, 10   Output  :     Invalide Range
//  Input   :    50, 10   Output  :     Invalid Range...
//
////////////////////////////////////////////////////////////////////////////