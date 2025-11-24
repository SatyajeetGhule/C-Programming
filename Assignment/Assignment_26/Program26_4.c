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
//                     disaplay '#', '$', and'*'.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    24/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input...\n");
        printf("Row Number and Column number should be same...\n");
        return;
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i + j == (iCol+1)) || (i == 1) || (j == 1) || (j == iRow) || (i == iCol))
            {
                printf("*\t");
            }
            else if(i + j < iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
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
//          Rows    :   4           *   *   *   *      
//          Columns :   4           *   #   *   *
//                                  *   *   $   *
//                                  *   *   *   *
//                                          
//
//  Input   :                   Output  :
//          Rows    :   6           *   *   *   *   *   *
//          Columns :   6           *   #   #   #   *   *
//                                  *   #   #   *   $   *
//                                  *   #   *   $   $   *
//                                  *   *   $   $   $   *
//                                  *   *   *   *   *   *
//
////////////////////////////////////////////////////////////////////////////
