#include <stdio.h>


int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int item = 11, k = 3, n = 5;
    int i = 0, j = n;
    printf("Total Elements in arrays are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Elements in array are A[%d]= %d \n", i,A[i]);
    }
    
    while (i >= k)
    {
        A[i+1] = A[i];
        
        i=i-1;
       
    }
    // for ( i = n-1; i >= k; i--)
    // {
    //     A[i+1]=A[i];
    // }
    n = n + 1;
    A[k] = item;
    printf("Total Elements in arrays after insertion are: \n");
    for (i = 0; i < n; i++)
    {
       printf("Elements in array are A[%d]= %d \n", i,A[i]);
    }

    return 0;
}