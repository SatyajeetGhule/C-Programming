////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    MultFact
//  Description   :    Given Number From User and Display multiplication of
//                     factors
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    23/10/2025
//
////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factor is : %d",iRet);

    return 0;

}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   12      Output  :   144   (1 * 2 * 3 * 4 * 6)
//  Input   :   10      Output  :   10    (1 * 2 * 5)
//  Input   :   13      Output  :   1     (Prime number)
//
////////////////////////////////////////////////////////////////////////////