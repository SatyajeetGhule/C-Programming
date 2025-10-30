////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    ChekEqual
//  Description   :    Given two number from user and Check both Number are
//                     Equal or not.
//  Input         :    Integer 
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/10/2025
//
////////////////////////////////////////////////////////////////////////////
bool ChekEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    bRet = ChekEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d and %d both Number are Equal\n",iValue1,iValue2);
    }
    else
    {
        printf("%d and %d Number is not Equal\n",iValue1,iValue2);
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//  
//  Input   :   112, 112      Output  :    112 and 112 both number are Equal
//  Input   :   101, 120      Output  :    102 and 112 number is not Equal
//  Input   :   13, -13       Output  :    13 and 13 number is not Equal
//
////////////////////////////////////////////////////////////////////////////