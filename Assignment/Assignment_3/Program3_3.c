////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayEvenFactor
//  Description   :    Given The Number For User and Disaplay Even Factor
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/10/2025
//
////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return 0;
}

//////////////////////////////////////////////////////////////////////////
//
//  Input   :   36      Output  :   2 4 6 12 18
//  Input   :   12      Output  :   2 4 6 
//  Input   :  -12      Outpute :   2 4 6
//  Input   :   0       Output  :   Terminate the Application
//
//////////////////////////////////////////////////////////////////////////
