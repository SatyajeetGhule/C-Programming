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
//                     disaplay positive and negative number.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    23/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iNo = -1; j <= iCol; j++, iNo--)
        {
            if((i % 2) == 0)
            {

                printf("%d\t",iNo);                
            }
            else
            {
                printf(" %d\t",j);
                
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
//          Rows    :   3          1    2   3   4
//          Columns :   4         -1   -2  -3  -4
//                                 1    2   3   4
//
//  Input   :                   Output  :
//          Rows    :   6           1   2   3   4   5   6      
//          Columns :   6          -1  -2  -3  -4  -5  -6
//                                  1   2   3   4   5   6
//                                 -1  -2  -3  -4  -5  -6
//                                  1   2   3   4   5   6
//                                 -1  -2  -3  -4  -5  -6
//
////////////////////////////////////////////////////////////////////////////