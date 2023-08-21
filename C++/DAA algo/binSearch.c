#include <stdio.h>

float sqrtBin(int key)
{
    int low = 1;
    int high = key;
    float ans = -1;
    // Base Cases
    if (key == 0 || key == 1)
    {
        return key;
    }
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (mid * mid <= key)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ans += (key - (ans*ans))/ans;
    return ans;
}

int binarySearch(int arr[],int x,int low,int high,int index){
        while(low<=high){
            int mid=low + (high - low)/2;
            if(arr[mid]==x){
                index=mid;
                high= mid-1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else low= mid+1;
        }
        return index;
    }

int main()
{
    int a[10], n, key;
    float s;
    // printf("Enter the size of array: ");
    // scanf("%d", &n);
    // printf("\nEnter the Elements of Array: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // printf("\nEnter the Elements to search : \n");
    // scanf("%d", &key);
    s = sqrtBin(50);
    // if(s==key){
    //     printf("\n element is found");
    // }
    // else{
    //     printf("\n element is not found");
    // }
    printf("%f", s);
    return 0;
}
