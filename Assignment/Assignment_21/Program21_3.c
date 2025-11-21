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
//                     disaplay revers number.
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
        for(int j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
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
//          Rows    :   5           5 4 3 2 1
//          Columns :   3           5 4 3 2 1
//                                  5 4 3 2 1
//
//  Input   :                   Output  :
//          Rows    :   6           6 5 4 3 2 1
//          Columns :   6           6 5 4 3 2 1
//                                  6 5 4 3 2 1
//                                  6 5 4 3 2 1
//                                  6 5 4 3 2 1
//                                  6 5 4 3 2 1
//
////////////////////////////////////////////////////////////////////////////