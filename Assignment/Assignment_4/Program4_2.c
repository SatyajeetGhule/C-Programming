////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FactRev
//  Description   :    Given Number From User and display its factors in
//                     decreasing order.
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////

void FactRev( int iNo)
{
    int iCnt = 0;

    for (iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    printf("Enter a Number \n");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12      Output  :   144   (6 * 4 * 3 * 2 * 1)
//  Input   :   10      Output  :   10    (5 * 2 * 1)
//  Input   :   13      Output  :   1     (Prime number)
//
////////////////////////////////////////////////////////////////////////////
