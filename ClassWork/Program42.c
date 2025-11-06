// 2 4 6 8 10

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
           printf("%d\t",iCnt);
        }
    }

    //Time Complexcity : O(N)

}
int main()
{
    int iValue = 0;
    printf("Please Enter your Frequence : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}