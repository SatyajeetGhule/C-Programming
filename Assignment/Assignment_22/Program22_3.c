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
    char ch= '\0';
    ch = 'A';
    for(i = 1; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {            
            printf("%c\t",ch); 
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
//          Rows    :   3           A   A   A   A
//          Columns :   4           B   B   B   B
//                                  C   C   C   C
//
//  Input   :                   Output  :
//          Rows    :   6           A   A   A   A   A   A  
//          Columns :   6           B   B   B   B   B   B
//                                  C   C   C   C   C   C
//                                  D   D   D   D   D   D
//                                  E   E   E   E   E   E
//                                  F   F   F   F   F   F  
//                                  
////////////////////////////////////////////////////////////////////////////