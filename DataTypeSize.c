#include<stdio.h>
int main()
{

    char cValue = 's';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;

    printf("size of character is : %lu\n",sizeof(cValue));
    printf("size of character is : %lu\n",sizeof(iValue));
    printf("size of character is : %lu\n",sizeof(fValue));
    printf("size of character is : %lu\n",sizeof(dValue));

    return 0;
}