#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj;

    printf("Size of Demo is : %lu\n",sizeof(struct Demo));  //12
    printf("Size of object is : %lu\n",sizeof(obj));

    return 0;
}