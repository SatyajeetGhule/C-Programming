#include<stdio.h>

int main()
{
    int i = 10;
    short j = 20;
    long int k = 30;

    printf("size of integer is : %lu\n",sizeof(i));   //4
    printf("size of integer is : %lu\n",sizeof(j));   //2
    printf("size of integer is : %lu\n",sizeof(k));   //8
    
    return 0;
}