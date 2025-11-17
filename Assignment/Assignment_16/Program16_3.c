////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int * IPTR;

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Check    
//  Description   :    Given a Number from user and check whether that 
//                     numbers contains 11 in it or not.
//  Input         :    Integer iPtr[], Integer
//  Output        :    bool (print (String))
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    15/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool iCheck = false;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCheck = true;            
            break;
        }
    }
    return iCheck;
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0;
    bool bRet = false;
    IPTR iPtr = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d",&iLength);

    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to Allocate Memory...\n");
        return-1;
    }
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter a %d Elements : \n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Check(iPtr, iLength);

    if(bRet == true)
    {
        printf("Number 11 is Present\n");
    }
    else 
    {
        printf("Number 11 is Upsent\n");
    }

    free(iPtr);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//   Input   :                               Output  :
//      Enter a Number of Element :            Number 11 is Present
//      6
//      Enter a 1 Element :
//      36
//      Enter a 2 Element :
//      21
//      Enter a 3 Element :
//      11
//      Enter a 4 Element :
//      80
//      Enter a 5 Element :
//      93
//      Enter a 6 Element :
//      88
//
//  Input   :                               Output  :
//      Enter a Number of Element :            Number 11 is Upsent
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