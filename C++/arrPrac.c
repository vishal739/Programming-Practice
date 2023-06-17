#include<stdio.h>
#include<stdlib.h>
int flag= 0, del=0;


void Display(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d-->",A[i]);
    }
}

int search(int *A, int n, int key){
    int i=0;
    while(i<=n){
        i++;
        if(A[i]==key){
           
            flag=1;
        }
    }
    return flag;
}



int delete(int *A, int n, int item){
    int i;
    while(i<=n){
        i++;
        if(A[i]==item){
            del=1;
            break;
            
        } 
    }
    for (int j = i+1; j <= n; j++)
            {
               A[j-1]=A[j];
            }
    return del;
}

int main(){
    int i, n=5,A[10], item;
    
    int k=3;
    printf("Enter the size of array");
    scanf("%d",&n);
     printf("Enter the elements of array");
     for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the Element to insert \n");
    scanf("%d", &item);
    n= n+1;
    

    while(i>=k){
        A[i+1]=A[i];
        i= i-1;
    }
    
    A[k]=item;
    flag= search(A, n, 30);
    if(flag==0){
        printf("Element not found\n");
    }
    else{
        printf("Element Found\n");
    }
    // update
    A[4]= 29;
    //delete
    del= delete(A,n,20);
    if(del==1){
        n=n-1;
    }
    Display(A,n);
    return 0;
}