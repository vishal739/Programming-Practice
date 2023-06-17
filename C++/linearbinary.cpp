#include<iostream>
using namespace std;

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
int main()
{
   int arr[10], element,n;
    printf("Enter range below 10 ");
    scanf("%d",&n);
   
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {   
        scanf("%d",&arr[i]);
       
    }
    printf("Enter the element to Search ");
    scanf("%d",&element);
    
    int searchIndex = binarySearch(arr, size, element);
     if(searchIndex=-1){
        printf("element not found");
    }
    else{
    printf("The element %d was found at index %d \n", element, searchIndex);}
   
    
    return 0;
}