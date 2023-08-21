#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b= temp;
}


int partition(int arr[], int low, int high)
{
	int pivot = arr[low];
	int i = low - 1, j = high + 1;

	while (1) {

		do {
			i++;
		} while (arr[i] < pivot);

		do {
			j--;
		} while (arr[j] > pivot);

		if (i >= j)
			return j;

		swap(&arr[i],&arr[j]);
	}
	// swap(&arr[low],&arr[j]);
}

int partition_r(int arr[], int low, int high)
{
	// srand(time(0));
	int random = low + rand() % (high - low);
    // printf("rand= %d->",random);
	swap(&arr[random],&arr[low]);

	return partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition_r(arr, low, high);
		// printf("pi= %d-->",pi);
		quickSort(arr, low, pi);
		quickSort(arr, pi + 1, high);
	}
}

// int kthSmallest(int arr[], int l, int r, int k) {
//         //code here
//         quickSort(arr, 0, r - 1);
//         return arr[k-1];
// 	    }

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
