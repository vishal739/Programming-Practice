#include<stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
}
int count=0;
void linSearch(int arr[],int n,int k){
    if(n==0){
        // printf("Element not found");
        return;
    }
    if(arr[0]==k){
        printf("element found at %d",count);
        return;
    }
    count++;
    linSearch(arr+1,n-1,k);
}
int main()
{
   int arr[] = {1,3,2,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 123;
    // int searchIndex = binarySearch(arr, size, element);
    // printf("The element %d was found at index %d \n", element, searchIndex);
    linSearch(arr,size-1,element);
    return 0;
}
// void main(){
//     // printf("%p \n" ,main);
//     printf("good morning");
// }