/////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////

#include<stdio.h>                               // For Input Output
#include<stdbool.h>                             // For Bool Header File

/////////////////////////////////////////////////////////
//
// Function :       CheckEvenOdd
// Description :    It is used to check even or odd
// Input :          Integer
// Output :         Boolean
// Author :         Satyajeet Manohar Ghule
// Date :           10/10/2025
/////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

/////////////////////////////////////////////////////////
//
// Entry Point Function of The Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    bRet = CheckEvenOdd(iValue);
    
    printf("Result is : %d\n",bRet);

    if(bRet == true)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }
    return 0;
}