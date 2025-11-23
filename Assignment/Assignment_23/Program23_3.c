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
//                     disaplay 'abcd' and number.
//  Input         :    Integer
//  Output        :    Integer and Charecter
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    23/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    char ch = '\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",j);    
            }
            else
            {
                printf("%c\t",ch);
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
//          Rows    :   3           a   b   c   d
//          Columns :   4           1   2   3   4
//                                  a   b   c   d
//
//  Input   :                   Output  :
//          Rows    :   6           a   b   c   d   e   f      
//          Columns :   6           1   2   3   4   5   6
//                                  a   b   c   d   e   f
//                                  1   2   3   4   5   6
//                                  a   b   c   d   e   f
//                                  1   2   3   4   5   6
//
////////////////////////////////////////////////////////////////////////////