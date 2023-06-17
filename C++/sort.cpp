#include <iostream>
using namespace std;

int temp, j, key;

void BubbleSort(int *arr, int n)
{
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

void quicksort(int *arr,int low, int high){
    
    if(low<high){
    int Ind= partition(arr,low,high);
    quicksort(arr,low,Ind-1);
    quicksort(arr,Ind+1,high);
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
    int arr[] = {1, 7, 5, 13, 12, 11};
    int n = 6;
    display(arr, 6);
    // AdaptiveBubbleSort(arr,6);
    // InsSort(arr,6);
    // SelSort(arr,6);
    quicksort(arr,0, n-1);
    display(arr, 6);

    return 0;
}