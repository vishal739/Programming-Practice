#include<iostream>
using namespace std;
int main()
{
    int A[]= {10,20,30,40,50};
    int k=3,n=5;
    int i,j=0;
    cout<<"The original elemnts are "<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<"A["<<i<<"] is: "<<A[i]<<endl;
    }
     j = k;
	
   while( j < n) {
      A[j-1] = A[j];
      j = j + 1;
   }
	
   n = n -1;
    
    cout<<"after deletion elemnts are "<<endl;
    
    for ( i = 0; i < n; i++)
    {
        cout<<"A["<<i<<"] is: "<<A[i]<<endl;
    }


}
