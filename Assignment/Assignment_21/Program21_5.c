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
//                     disaplay number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    21/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
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
//          Rows    :   3           1 1 1 1
//          Columns :   4           2 2 2 2
//                                  3 3 3 3
//
//  Input   :                   Output  :
//          Rows    :   6           1 1 1 1 1 1  
//          Columns :   6           2 2 2 2 2 2 
//                                  3 3 3 3 3 3
//                                  4 4 4 4 4 4
//                                  5 5 5 5 5 5
//                                  6 6 6 6 6 6
//                                  
////////////////////////////////////////////////////////////////////////////