#include <stdio.h>
int max, min;

void maxmin(int a[], int left, int right)
{
    if (left == right)
    {
        max = a[left];
        min = a[left];
    }
    else if (left == right - 1)
    {
    //     prinf("%d-->%d",left,right-1);
        if (a[left] < a[right])
        {
            max = a[right];
            min = a[left];
        }
        else
        {
            max = a[left];
            min = a[right];
        }
    }
    else
    {
        int min1, max1;
        int mid = ((left + right - 1) / 2);
        maxmin(a, left, mid);
        max1 = max;
        min1 = min;
        maxmin(a, mid + 1, right);
        if (max < max1)
        {
            max = max1;
        }
        if (min1 < min)
        {
            min = min1;
        }
    }
}
int main()
{
    int a[10], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maxmin(a, 0, n - 1);
    printf("Max=%d \n", max);
    printf("Min=%d \n", min);
    return 0;
}

