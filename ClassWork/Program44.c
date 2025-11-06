#include <stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
    {
        if((iNo1 % iNo2)== 0 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First Number ");
    scanf("%d",&iValue1);
    printf("Enter Second Number ");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);
    if(bRet == true)
    {
        printf("IT is Completlly Devisible\n");
    }
    else
    {
        printf("IT is Not Devisible\n");
    }
    return 0;
}