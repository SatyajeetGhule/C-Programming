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
//  Function Name :    LastOcc
//  Description   :    Accept N numbers from user and accept one another number
//                     as NO, return index of last occurrence of that NO.
//  Input         :    Integer iPtr[], Integer, Integer
//  Output        :    Integer or (print String)
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/11/2025
//
////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iSize, int iNo)
{
    int occurrence = -1;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            occurrence = iCnt;
        }
    }
    return occurrence;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iValue = 0;
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

    printf("Enter a number of search elements :\n");
    scanf("%d",&iValue);

    iRet = LastOcc(iPtr, iLength,iValue);

    if(iRet == -1)
    {
        printf("There is No such Element\n");
    }
    else
    {
        printf("Last Occurrence of Number is : %d",iRet);
    }

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Last Occurrence of Number is : 04
//      6
//      Enter a number :
//      11
//      Enter a 1 Element :
//      11
//      Enter a 2 Element :
//      21
//      Enter a 3 Element :
//      51
//      Enter a 4 Element :
//      80
//      Enter a 5 Element :
//      11
//      Enter a 6 Element :
//      88
//
//  Input   :                               Output  :
//      Enter a Number of Element :            There is no such element
//      5       
//      Enter a Number :
//      30                                    
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

