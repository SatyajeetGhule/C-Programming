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

#include<stdio.h>

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