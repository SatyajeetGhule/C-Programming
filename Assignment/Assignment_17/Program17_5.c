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
//  Function Name :    Product
//  Description   :    Accept N numbers from user and return product of 
//                     all odd elements.
//  Input         :    Integer iPtr ,Integer ,Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    17/11/2025
//
////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iSize)
{
    int ProOdd = 0;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            ProOdd = 1;
            ProOdd *= Arr[iCnt];
        }
    }
    return ProOdd;
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

    iRet = Product(iPtr, iLength);

    printf("Product is : %d",iRet);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :             Product : 23715
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
//      Enter a Number of Element :             Product is : 0
//      5                                           
//      Enter a 1 Element :
//      12
//      Enter a 2 Element :
//      24
//      Enter a 3 Element :
//      40
//      Enter a 4 Element :
//      36
//      Enter a 5 Element :
//      14
//
////////////////////////////////////////////////////////////////////////////

