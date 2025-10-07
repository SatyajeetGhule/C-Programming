#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    
    printf("size of Arr : %lu\n",sizeof(arr));   //20

    printf("Arr : %lu\n",arr);    //100
    printf("&Arr : %lu\n",&arr);   //100

    printf("Arr + 1 : %lu\n",arr+1);   //104
    printf("(&Arr) + 1 : %lu\n",(&arr)+1);  //120
    
    return 0;
}