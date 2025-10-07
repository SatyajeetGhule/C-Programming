#include <stdio.h>
#include <stdlib.h>

int main()
{

    int length = 0;
    int *Arr = NULL;

    printf("Enter the Number of Element : \n");
    scanf("%d",&length);

    Arr = (int*)malloc(length * sizeof(int));

    //Step 1 : allocate the memory...
    if(Arr == NULL)
    {
        printf("Unable to allocated memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }

    //Step 2 : use the Memory..

    //Step 3 : Free the Memory...
    free(Arr);
    return 0;
}