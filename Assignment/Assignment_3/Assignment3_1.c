//////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name :    PrintEven
//  Description   :    It is used to perform print the Even Number
//  Input         :    Integer 
//  Output        :    Integee
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/10/2025
//
//////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    //int iRet = 0, temp = 2;
    
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
        //iRet = (temp*iCnt);
        //printf("%d\t",iRet);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Entry point Function for this Application
//
//////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by the application
//  
//  Input : 7      Output : 2 4 6 8 10 12 14
//  Input : -10    Output : Terminate the program
//  Input : 12     Output : 2 4  6 8 10 12 14...24
//  Input : 0      Output : Terminate the Application
//
//////////////////////////////////////////////////////////////////
















