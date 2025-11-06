/*
    START
        Accept Number and Store as No
        Divide No by 2
        If the remainder is the 0
            then display as Even
        Otherwise
            display as Odd

*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf(" It is Odd Number\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    CheckEvenOdd(iValue);
    return 0;
}
