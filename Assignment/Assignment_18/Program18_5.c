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
//  Function Name :    DigitSum
//  Description   :    Accept N numbers from user and display summation of
//                     digits of each number.
//  Input         :    Integer iPtr[], Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    18/11/2025
//
////////////////////////////////////////////////////////////////////////////

void DigitSum(int Arr[], int iSize)
{
    int sum = 0,iDigit = 0;
    
    printf("Summation of each number is :\n");
    for(int iCnt = 0; iCnt <iSize; iCnt++)
    {
        int temp = 0;
        temp = Arr[iCnt];
        sum = 0;
        while (temp != 0)
        {
            iDigit = temp % 10;
            sum += iDigit;
            temp = temp / 10;
        }        
        printf("%d\t",sum);        
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
        scanf("%d", &iPtr[iCnt]);
    }

    DigitSum(iPtr, iLength);

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Summation of each Number is :
//      6                                       13 12 3 8 12 16
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
//      Enter a Number of Element :           Summation of each Number is :
//      5                                       3 7 11 7 6          
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