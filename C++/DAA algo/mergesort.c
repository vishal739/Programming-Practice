#include<stdio.h>

void merge(int a[],int low, int mid, int high){
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int c[high+1];
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        c[k]=a[i];
            i++;
            k++;
    }
    while(j<=high){
        c[k]=a[j];
            j++;
            k++;
    }
    for(i=low;i<=high;i++){
        a[i]=c[i];
    }
}

void mergesort(int a[],int low, int high){
    if(low<high){
        int mid= (low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int a[10], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d->", a[i]);
    }
}