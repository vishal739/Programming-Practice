#include<stdio.h>

int BinRec(int a[],int low,int high, int key){
    if(low>high)
        return -1;
    int mid= (low+high)/2;
    if(a[mid]==key){
        return a[mid];
    }
    else if(a[mid]>key){
        return BinRec(a,low,mid-1,key);
    }
    else{
        return BinRec(a,mid+1,high,key);
    }
    
}

int main(){
    int a[10], n,key,s;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the Elements to search : \n");
    scanf("%d", &key);
    s= BinRec(a,0,n-1,key);
    if(s==key){
        printf("\n element is found");
    }
    else{
        printf("\n element is not found");
    }
    return 0;
}

