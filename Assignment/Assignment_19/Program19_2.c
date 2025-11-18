////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h.>
typedef int * IPTR;

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Display    
//  Description   :    Given a Number from user and all such elements which
//                     are divisible by 5.
//  Input         :    Integer iPtr[], Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int div = 0;
    printf("Divisible Number is :\n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
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
    int iLength = 0;
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

    Display(iPtr, iLength);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Divisible Number is :
//      6                                      85 35
//      Enter a 1 Element :
//      85
//      Enter a 2 Element :
//      66
//      Enter a 3 Element :
//      33
//      Enter a 4 Element :
//      80
//      Enter a 5 Element :
//      93
//      Enter a 6 Element :
//      88
//
//  Input   :                               Output  :
//      Enter a Number of Element :            Divisible Number is :
//      5                                      10 25 15
//      Enter a 1 Element :
//      10
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