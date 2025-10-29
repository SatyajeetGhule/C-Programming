////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    NonFact
//  Description   :    Given Number From User and Display all its Non 
//                     Factors
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
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

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12      Output  :   5 7 8 9 10 11
//  Input   :   13      Output  :   2 3 4 5 6 7 8 9 10 11 12
//  Input   :   10      Output  :   3 4 6 7 8 9
//
////////////////////////////////////////////////////////////////////////////