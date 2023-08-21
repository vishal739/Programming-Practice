#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter the Value of n" << endl;
    cin >> n;
    k = 1;
    int num=1;

    // for the given pattern
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1
    // for (int i = 1; i <= n; i++)
    // {
    //     k=1;
    //     int j=1;
    //         while(j<=n-i+1){
    //             cout<<j<<" ";
    //             j++;
    //         }
    //          j=1;
    //         while(j<=(i-1)*2){
    //             cout<<"* ";
    //             j++;
    //         }
    //         // j=k-i;
    //         j=n-i+1;
    //         while(j>=1){
    //             cout<<j<<" ";
    //             j--;
    //         }
    //        cout<<endl;
    // }


    // for the given pattern
    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1
    // for (int i = 1; i <= n; i++)
    // {
    //     k=1;
    //     int j=1;
    //         while(k<=n-i){
    //             cout<<"  ";
    //             k++;
    //         }
            
    //         while(j<=i){
    //             cout<<j<<" ";
    //             j++;
    //         }
    //         j=i-1;
    //         while(j>=1){
    //             cout<<j<<" ";
    //             j--;
    //         }
    //        cout<<endl;
    // }

    // for the pattern below
    // ****
    //  ***
    //   **
    //    *
    // for (int i = 1; i <= n; i++)
    // {
    //     k=1;
    //     while(k<i){
    //         cout<<" ";
    //         k++;
    //     }
    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    // }
     

    // to print this pattern
    //    *
    //   **
    //  ***
    // ****
    // for (int i = 1; i <= n; i++)
    // {
    //     k=1;
    //         while(k<=n-i){
    //             cout<<" ";
    //             k++;
    //         }
    //         int j=1;
    //         while(j<=i){
    //             cout<<"*";
    //             j++;
    //         }
    //        cout<<endl;
    // }
    

    // for the given pattern
    // D
    // C D
    // B C D
    // A B C D
    // for (int i = 1; i <=n; i++)
    // {
    //     k=65+n-i;
    //     for (int j = 1; j <=i; j++)
    //     {   
            
    //         cout<<char(k)<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }


    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 4; j >= 1; j--)
    //     {
    //         cout<<k--<<" ";
    //     }
    //     cout<<endl;
    // }

    // Without using extra variable
    // 1
    // 2 3 
    // 3 4 5 
    // 4 5 6 7
    // int j;
    // for (int i = 1; i <= n; i++)
    // {
    //     j=i;
    //     while(j<i*2){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    // }
}