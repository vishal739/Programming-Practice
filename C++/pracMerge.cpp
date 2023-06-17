#include <iostream>
using namespace std;

void merge(int a[], int b[], int c[], int x, int y)
{
    int i, j, k;
    i = j = k = 0;
    while (i <= x && j <= y)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i <= x)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j <= y)
    {
        c[k] = b[j];
        j++;
        k++;
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

int main(){
    int arr1[]={1,5,8,10,17,20};
    int arr2[]={2,4,6,7,12,15};
    int arr[100];
    merge(arr1,arr2,arr,5,5);
    display(arr,12);
}