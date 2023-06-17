#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

int main() {
    // unsigned int a, b,s;
    // char const* num = "hi";
    // cin >> a >> b;
    // s= max(a,b);
    // cout<<s;
    // for (int i = a; i <= b; i++) {
    //     if (i >= 1 && i <= 9) {
    //         switch (i) {
    //         case 1:
    //             num = "one";
    //             break;
    //         case 2:
    //             num = "two";
    //             break;
    //         case 3:
    //             num = "three";
    //             break;
    //         case 4:
    //             num = "four";
    //             break;
    //         case 5:
    //             num = "five";
    //             break;
    //         case 6:
    //             num = "six";
    //             break;
    //         case 7:
    //             num = "seven";
    //             break;
    //         case 8:
    //             num = "eight";
    //             break;
    //         case 9:
    //             num = "nine";
    //             break;
    //         }
    //     }
    //     else if (i > 9) {
    //         if (i % 2 == 0) {
    //             num = "even";
    //         }
    //         else {
    //             num = "odd";
    //         }
    //     }
    //     cout << num << endl;
    // }

    //ArrayHR
     int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
    cin>>a[i];
    }   
    for (int i=n-1; i>=0; i--) {
    cout<<a[i];
    }   
    return 0;
}
//  int N; 
//     cin>>N; 
//     int list[N];
//     for (int i=0; i<N; i++){
//         cin>>list[i];
//     }
//     for (int i = N-1; i>=0; i--){
//         cout<<list[i]<<" ";
//     }