#include<stdio.h>
#include<stdlib.h>


void swap(int a[],int i, int j){
    int temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}
void Heapify(int a[], int n, int i){
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;

    if(l < n && a[l] > a[largest]){
        largest = l;
    }
    if(r < n && a[r] > a[largest]){
        largest = r;
    }
    if(largest != i){
        swap(a,i,largest);
        Heapify(a,n,largest);
    }
}

void buildHeap(int a[], int n){
    int i;
    for(i = n / 2-1 ; i >= 0; i--){
        Heapify(a, n, i);
    }
}

void heapsort(int a[], int n){
    int i;
    buildHeap(a,n);
    for(i = n -1; i > 0; i--){
        swap(a,0,i);
        Heapify(a, i, 0);
    }
}

int main(){
    int a[10], i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

   
    printf("\nEnter the elements of the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    heapsort(a, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    

    return 0;
}
