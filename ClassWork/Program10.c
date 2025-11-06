/*
    Stap 1 :  Undarstand the problem statement
    Stap 2 :  write the algoritham
    Stap 3 :  Decide the programming language
    Stap 4 :  Write the program
    Stap 5 :  Test the Program
*/

/*
    Algoritham

    START
        Accept First Number as No1
        Accept Second Number as No2
        If the inpute is negative then convert it into positive
        Perform Addition of No1 and No2
        Display Addition on Screen
    STOP
*/


////////////////////////////////////////////////////////////
//
//  Requied Header File 
//
////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform Addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Satyajeet Manohar Ghule
//  Date :          09/10/2025
//
////////////////////////////////////////////////////////////


float AdditionTowNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;   // Business Logic
    return fSum;
}

////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter First Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTowNumbers(fValue1,fValue2);
    
    printf("Addition of Two Numbers : %f\n",fRet);
    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld By the Application
//  
//  Input : 10.5    Input : 3.2     Output : 13.7
//  Input : -10.5   Input : 3.2     Output : 13.7
//  Input : 10.5    Input : -3.2    Output : 13.7
//  Input : -10.5   Input : -3.2    Output : 13.7
//  Input : 10.5    Input : 0       Output : 10.5
//
////////////////////////////////////////////////////////////
