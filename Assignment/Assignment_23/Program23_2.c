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
    iNo = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iNo++)
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
//          Rows    :   3           1    2   3   4
//          Columns :   4           5    6   7   8
//                                  9    10  11  12
//
//  Input   :                   Output  :
//          Rows    :   6           1   2   3   4   5   6       
//          Columns :   6           7   8   9   10  11  12
//                                  13  14  15  16  17  18
//                                  19  20  21  22  23  24
//                                  25  26  27  28  29  30
//                                  31  32  33  34  35  36
//
////////////////////////////////////////////////////////////////////////////