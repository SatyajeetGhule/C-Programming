#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *Arr = NULL;

    Arr = (int *)malloc(5 * sizeof(int));  //20 byte

    // Step 1 : allocate the memory...

    // Step 2 : use the Memory..

    Arr = (int *)realloc(Arr, 3 * sizeof(int));  //12 byte

    // Step 3 : Free the Memory...
    free(Arr);
    return 0;
}