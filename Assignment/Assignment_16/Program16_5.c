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
//  Function Name :    Frequency
//  Description   :    Accept N numbers from user and accept one another 
//                     number as NO, return frequency of NO form it.
//  Input         :    Integer iPtr[], Integer, Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
    IPTR iPtr;

    printf("Enter number of Elements :\n");
    scanf("%d",&iLength);


    printf("Enter a Number for count frequency :\n");
    scanf("%d",&iValue);

    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to Allocate Memory...\n");
        return -1;
    }
    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        printf("Enter %d Element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Frequency(iPtr, iLength, iValue);

    printf("In this Elements toatal %d number are : %d", iValue, iRet);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                                  Output  :
//      Enter a Number of Element :                 Result is : 0
//      6
//      Enter a Number for Count Frequency :
//      10    
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
//      Enter a Number of Element :            Result is : 2
//      5          
//      Enter a Number for Count Frequency :
//      12                                  
//      Enter a 1 Element :
//      12
//      Enter a 2 Element :
//      25
//      Enter a 3 Element :
//      12
//      Enter a 4 Element :
//      34
//      Enter a 5 Element :
//      15
//
////////////////////////////////////////////////////////////////////////////

