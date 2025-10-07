#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);
    
    printf("Data fetched by p :%d\n",*p);   //21
    printf("Data fetched by q :%d\n",*q);   //111
    return 0;
}