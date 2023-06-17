#include <iostream>
#include<limits.h>

using namespace std;

int i, temp, j, key;

void BubbleSort(int *arr, int n)
{
    int pass=1,k;
    for (int i = 0; i < n - 1; i++) // No. of Passes
    {
        for (int j = 0; j < n - 1 - i; j++) // No. of Comparisons
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("\nPass %d: ",pass++);
        for(k=0;k<n;k++){
            printf("%5d\t",arr[k]);
        }
    }
}
void AdaptiveBubbleSort(int *arr, int n)
{
    int isSorted = 0;

    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        cout << "Pass- " << i + 1 << endl;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return; // If it got sorted in just 2 pass it will return it would not got for further passes
        }
    }
}
void InsSort(int *arr, int n)
{
    int k,pass=1;
    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
    }
}
printf("\nPass %d: ",pass++);
        for(k=0;k<n;k++){
            printf("%5d\t",arr[k]);
}

void SelSort(int *arr, int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
// void qsort(int *arr, int n)
// {
//     int pivot, i, j, x, y;
//     i = 0;
//     j = n - 1;
//     while (j < i)
//     {
//         pivot = i;
//         while (arr[i + 1] <= arr[pivot])
//         {

//             i++;
//             x = arr[i];
//             cout << " Upadte " << x << endl;
//             while (arr[j] >= arr[pivot])
//             {
//                 j--;
//             }
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     temp = arr[pivot];
//     arr[pivot] = arr[j];
//     arr[j] = temp;
// }

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int *arr, int low, int high)
{

    if (low < high)
    {
        int Ind = partition(arr, low, high);
        quicksort(arr, low, Ind - 1);
        quicksort(arr, Ind + 1, high);
    }
}

void merge(int arr[], int mid, int low, int high)
{
    int k;
    int b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
    {
        arr[i] = b[i];
       
    }
}

void mergesort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int maximum(int arr[], int n){
    int max= INT_MIN;
    for(int i= 0; i< n; i++){
        if(max< arr[i]){
            max= arr[i];
        }
    }
    return max;
}

void countsort(int *A, int n){
    int i, j;

    int max= maximum(A, n);
    int *count= (int*)malloc((max+1)*sizeof(int));
    for ( i = 0; i < max+1; i++)
    {
        count[i]=0;
    }
    for ( i = 0; i < n; i++)
    {   
        printf("%d = %d \n", count[A[i]], count[A[i]]+1 );
        count[A[i]]=count[A[i]] +1;
    }
    i=0;
    j=0;
    while(i<=max){
        if(count[i]>0){
            A[j]=i;
            printf("%d-->%d \n", A[j],i);
            printf("%d = %d \n", count[i], count[i]-1 );
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
    
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main()
{
    int arr[] = {5,8,4,1,3};
    // int arry[] = {3, 8, 9, 10, 12, 24};
    // int merge[100];
    // display(arr, 7);
    // AdaptiveBubbleSort(arr,6);
    // InsSort(arr,5);
    // SelSort(arr,6);
    // quicksort(arr,0, n-1);
    // mergesort(arr, 0, 6);
    // BubbleSort(arr,5);
    // display(arr, 5);
    countsort(arr,5);
    display(arr, 5);

    return 0;
}