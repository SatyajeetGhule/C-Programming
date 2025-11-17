////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int * IPTR;

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Frequency
//  Description   :    Accept N numbers from user and accept one another 
//                     Number as No, check whether NO is present or not.
//  Input         :    Integer iPtr[], Integer, Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool iCheck = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCheck = true;
            break;
        }
    }
    return iCheck;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iValue = 0;
    bool bRet = false;
    IPTR iPtr;

    printf("Enter a Number of elements :\n");
    scanf("%d",&iLength);

    printf("Enter a number for count frequency :\n");
    scanf("%d",&iValue);

    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to Allocate memory...\n");
        return -1;
    }

    printf("---------------------------------");
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("enter %d Element are :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Frequency(iPtr, iLength, iValue);
    
    if(bRet == true)
    {
        printf("%d is Present\n", iValue);
    }
    else
    {
        printf("%d ia Upsent\n", iValue);
    }
    
    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Result is : 0
//      6
//      Enter a 1 Element :
//      85
//      Enter a 2 Element :
//      66
//      Enter a 3 Element :
//      03
//      Enter a 4 Element :
//      80
//      Enter a 5 Element :
//      93
//      Enter a 6 Element :
//      88
//
//  Input   :                               Output  :
//      Enter a Number of Element :            Result is : -1
//      5                                           
//      Enter a 1 Element :
//      12
//      Enter a 2 Element :
//      25
//      Enter a 3 Element :
//      29
//      Enter a 4 Element :
//      34
//      Enter a 5 Element :
//      15
//
////////////////////////////////////////////////////////////////////////////

