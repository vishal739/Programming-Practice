#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<=j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qSort(int arr[],int low,int high)
{
    // Write your code here.
    if (low < high) {
        int pi = partition(arr, low, high);
        qSort(arr, low, pi - 1);
        qSort(arr, pi + 1, high);
    }
}

// void merge(int a[],int low, int mid, int high){
//     int i,j,k;
//     i=low;
//     j=mid+1;
//     k=low;
//     int c[high+1];
//     while(i<=mid && j<=high){
//         if(a[i]<=a[j]){
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         else{
//             c[k]=a[j];
//             j++;
//             k++;
//             count+=mid-low+1;
//         }
//     }
//     while(i<=mid){
//         c[k]=a[i];
//             i++;
//             k++;
//     }
//     while(j<=high){
//         c[k]=a[j];
//             j++;
//             k++;
//     }
//     for(i=low;i<=high;i++){
//         a[i]=c[i];
//     }
// }

// void mergesort(int a[],int low, int high){
//     if(low<high){
//         int mid= (low+high)/2;
//         mergesort(a,low,mid);
//         mergesort(a,mid+1,high);
//         merge(a,low,mid,high);
//     }
// }

int main(){
    int a[10], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qSort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d->", a[i]);
    }
    cout<<endl;
    // cout<<count;
}