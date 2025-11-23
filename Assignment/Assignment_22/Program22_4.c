////////////////////////////////////////////////////////////////////////////
//
//  Request Header File
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Pattern
//  Description   :    Accept Number for Rows and Column from user and 
//                     disaplay Number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    22/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    iNo = iCol;
    for(i = iRow; i >= 1; i--,iNo--)
    {
        for(j = iCol; j >= 1; j--)
        {            
            printf("%d\t",iNo); 
        }
        printf("\n");
    }    
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :                   Output  :
//          Rows    :   3          3    3   3   3
//          Columns :   4          2    2   2   2
//                                 1    1   1   1
//
//  Input   :                   Output  :
//          Rows    :   6          6    6   6   6   6   6   
//          Columns :   6          5    5   5   5   5   5
//                                 4    4   4   4   4   4
//                                 3    3   3   3   3   3
//                                 2    2   2   2   2   2
//                                 1    1   1   1   1   1
//                                  
////////////////////////////////////////////////////////////////////////////