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
//  Description   :    Accept N numbers from user and return difference
//                     between summation of even elements and summation
//                     of odd elements.
//  Input         :    Integer iPtr[], Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int even = 0, odd = 0, iDigit = 0, iSum;

    for(int iCnt = 0; iCnt  < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            even += Arr[iCnt];
        }
        if((Arr[iCnt] % 2) != 0)
        {
            odd += Arr[iCnt];
        }        
    }
    return (even - odd);
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
        printf("Unable to Allocat Memory...\n");
        return -1;
    }

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d Element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Difference(iPtr, iLength);

    /*
        // if we want only Positive number use below code
        if(iRet <= 0)
        {
            iRet = -iRet;
        }        
    */

   printf("%d",iRet);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Difference Number is : 53
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
