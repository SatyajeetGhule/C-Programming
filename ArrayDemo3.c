#include<stdio.h>

int main()
{
    int arr[4] = {10,20,30,40};
    
    printf("Arr : %lu\n",arr);  //100
    printf("&Arr : %lu\n",&arr);
    printf("&(Arr[0]) : %lu\n",&(arr[0]));

    return 0;
}