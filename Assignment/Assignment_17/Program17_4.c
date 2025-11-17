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
//  Function Name :    Range
//  Description   :    Accept N numbers from user and accept Range, Display 
//                     all elements from that range
//  Input         :    Integer iPtr[], Integer, Integer, Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && Arr[iCnt] <= iNo2)
        {
            
            printf("%d\t",Arr[iCnt]);
        }
    }
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iValue1 = 0, iValue2 = 0;
    IPTR iPtr;

    printf("enter a Number of Elements :\n");
    scanf("%d",&iLength);

    printf("Enter Start Number\n");
    scanf("%d",&iValue1);

    printf("Enter End Number\n");
    scanf("%d",&iValue2);

    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate Memory...\n");
        return -1;
    }

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d Element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    Range(iPtr,iLength, iValue1,iValue2);
   

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  : 45 30 55 
//      Enter a Number of Element :
//      6
//      Enter Start Number :
//      30
//      Enter End Number :
//      60
//      Enter a 1 Element :
//      45
//      Enter a 2 Element :
//      66
//      Enter a 3 Element :
//      03
//      Enter a 4 Element :
//      80
//      Enter a 5 Element :
//      30
//      Enter a 6 Element :
//      55
//
//  Input   :                               Output  :
//      Enter a Number of Element :
//      5       
//      Enter First Number :
//      60
//      Enter End Number :
//      90                                    
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

