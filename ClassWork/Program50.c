//Factors of 6
#include <stdio.h>

void NonFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
// Time Complexcity O(N)
int main()
{
    int iValue = 0;

    printf("Enter First Number ");
    scanf("%d",&iValue);
    
    NonFactors(iValue);

    return 0;
}