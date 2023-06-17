#include<iostream>
using namespace std;
int main()
{
    int A[]= {10,20,30,40,50};
    int item=25 , n=5, k=3;
    int i,j=0, flag= 0;
    cout<<"The original elemnts are "<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<"A["<<i<<"] is: "<<A[i]<<endl;
    }
//    while( j < n){
//       if( A[j] == item ) {
//          flag=1;
//          break;
//       }
		
//       j = j + 1;
//    }
//     if(flag==1){
//     cout<<"Item found at A["<<j<<"] "<<endl;}

//     if(flag==0){
//             cout<<"Item not found"<<endl;
//         }

// Update Operation
 A[k-1]=item;
 cout<<"After Update "<<endl;
  for ( i = 0; i < n; i++)
    {
        cout<<"A["<<i<<"] is: "<<A[i]<<endl;
    }
   
    return 0;
}