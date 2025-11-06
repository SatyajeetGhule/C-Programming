#include<stdio.h>
#include<Stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;       // Optimaization
        }
    }
    if(iCnt > (iNo/2))  // No Factors
    {
        return true;
    }
    else                 // Atleast one Factor
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Nimber\n",iValue);
    }
    else
    {
        printf("%d is Not a Prime Nimber\n",iValue);
    }

    return 0;
}

//  Time Complexcity : For Prinme - N/2
//  Time Complexcity : For Non Prime - either 1 or 2