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
//  Function Name :    FirstOcc
//  Description   :    Accept N numbers from user and accept one another number 
//                     as NO, return index of first occurrence of that NO.
//  Input         :    Integer iPtr[], Integer, Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/11/2025
//
////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int occurence = -1;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            occurence = iCnt;
            break;
        }
    }
    return occurence;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iValue = 0, iRet = 0;
    IPTR iPtr;

    printf("Enter a Number of elements\n");
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
    
    printf("Enter a number to search\n");
    scanf("%d",&iValue);


    iRet = FirstOcc(iPtr,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First is Occurrence of number is : %d\n",iRet);
    }

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :             There is no such number
//      6
//      Enter a Number :
//      11
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
//      Enter a Number of Element :            First is Occurrence of number is : 2
//      5                                           
//      Enter a Number :
//      29
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

