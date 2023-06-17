#include<stdio.h>
#include<stdlib.h>

int swap(int a, int b){
    a= a+b; // 6+4 =10
    b= a-b; // 10-4= 6
    a= a-b;
    printf("Value is %d %d \n ",a,b);
}
int main(){
    int a=6,b=4;
    swap(a,b);
    printf("Value is %d \n",b);
    // ptr= &n;
    // printf("%u",*p);  
    // printf("SIze %d",sizeof(a));  
    // printf("%d\n",a);    
    // printf("%u\n",a);    
    // printf("%u\n",p);  
    // printf("%u\n",*p);  
    // printf("%u\n",&p);  
    // printf("%u\n",*(&p));  
    
    // ptr = (int*)malloc(4*sizeof(n));
    // printf("SIze %d \n ",sizeof(n));

    // if (ptr == NULL) {
    //     printf("Memory not allocated.\n");
    //     exit(0);
    // }
    // else {
 
    //     // Memory has been successfully allocated
    //     printf("Memory successfully allocated using malloc.\n");
 
    //     // Get the elements of the array
    //     for (int i = 0; i < n; ++i) {
    //         ptr[i] = i + 1;
    //     }
 
    //     // Print the elements of the array
    //     printf("The elements of the array are: ");
    //     for (int i = 0; i < n; ++i) {
    //         printf("%d \n ", ptr[i]);
    //     }
    // }
 

    return 0;
}