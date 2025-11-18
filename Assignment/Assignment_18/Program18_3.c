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
//  Function Name :    Difference
//  Description   :    Given a Number from user and print on screen difference
//                     Between Largest number and Smallest number.
//  Input         :    Integer iPtr[], Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int max = Arr[0], min = Arr[0];
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= max)
        {
            max = Arr[iCnt];
        }
        if(Arr[iCnt] <= min)
        {
            min = Arr[iCnt];
        }
    }
    return (max - min);
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

    printf("Enter a Number of Elements :\n");
    scanf("%d",&iLength);

    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to Allocate Memory...\n");
        return -1;
    }

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d Element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Difference(iPtr, iLength);
    printf("Difference is : %d",iRet);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Largest Number is : 93
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
//      Enter a Number of Element :            Largest Number is : 34
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