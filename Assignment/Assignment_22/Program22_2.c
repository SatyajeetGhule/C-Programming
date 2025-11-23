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
//                     disaplay ABDC.
//  Input         :    Integer
//  Output        :    Charecter
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    22/11/2025
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0', ch2 = '\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch1 = 'a', ch2 = 'A'; j <= iCol; j++, ch1++, ch2++)
        {
            if(i % 2 == 0)
            {                
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
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
//          Rows    :   3           A   B   C   D
//          Columns :   4           a   b   c   d
//                                  A   B   C   D
//
//  Input   :                   Output  :
//          Rows    :   6           A   B   C   D   E   F  
//          Columns :   6           a   b   c   d   e   f 
//                                  A   B   C   D   E   F 
//                                  a   b   c   d   e   f 
//                                  A   B   C   D   E   F 
//                                  a   b   c   d   e   f 
//                                  
////////////////////////////////////////////////////////////////////////////