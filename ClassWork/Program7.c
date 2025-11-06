#include<stdio.h>
int AdditionTowNumbers(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;   // Business Logic
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iRet = AdditionTowNumbers(iValue1,iValue2);
    
    printf("Addition of Two Numbers : %d\n",iRet);
    return 0;
}