////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int * IPTR;

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Minimum
//  Description   :    Given a Number from user and printt Smallest number
//  Input         :    Integer iPtr[], Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iSize)
{
    int Min = Arr[0];
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }
    return Min;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0;
    IPTR iPtr;

    printf("Enter a number of Elements :\n");
    scanf("%d",&iLength);

    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to Allocate Memory...");
        return -1;
    }

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d Element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Minimum(iPtr, iLength);
    printf("Minimum Number is : %d",iRet);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Minimum Number is : 03
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
//      Enter a Number of Element :            Minimum Number is : 12
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