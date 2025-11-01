////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Table
//  Description   :    Given a number from user and print that number of
//                     Table.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    25/10/2025
//
////////////////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;
    int Tbl = 0;
    Tbl = 1;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=10; iCnt++)
    {
        Tbl = iNo * iCnt;
        printf("%d\t",Tbl);
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

    Table(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   3    Output  : 3 6 9 12 15 18 21 24 27 30
//  Input   :   6    Output  : 6 12 18 24 30 36 42 48 54 60
//  Input   :   9    Output  : 9 18 27 36 45 54 63 72 81 90
//
////////////////////////////////////////////////////////////////////////////