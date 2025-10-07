#include<stdio.h>

int main()
{
    int i = 10;
    int j = 10;

    int ians = 0, jans = 0;

    ians = i++;
    jans = ++j;

    printf("Value of i : %d\n",i);          //11
    printf("Value of ians : %d\n",ians);    //10

    printf("Value of j : %d\n",j);          //11
    printf("Value of jans : %d\n",jans);    //11


    return 0;
}