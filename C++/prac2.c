#include<stdio.h>
#include<stdlib.h>

void swap(int *A, int *B){
    int temp= *A;
    *A= *B;
    *B = temp;
}

void bubblesort(int *A, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(A[j] > A[j+1]);
            swap(&A[j], &A[j+1]);
        
    }
    
}
}

void insSiort(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        int key=A[i];
        int j=i-1;
        while(j>=0 && A[j]> key){
            A[j+1]= A[j];
            j--;
        }
        A[j+1]= key;
    }
    
}

void selsort(int *A, int n){
    for (int i = 0; i < n; i++)
    {
       int min=i;
       for (int j = i+1; j< n; j++)
       {
         if(A[j]< A[min]){
            min= j;
         }
       }
       swap(&A[i],&A[min]);
       
    }
    
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d-->", arr[i]);
    }
    printf("\n");
}

int main(){
    int A[]={10,5,6,8,2};
    // bubblesort(A, 5);
    // insSiort(A,5);
    selsort(A,5);
    display(A,5);
    return 0;
}