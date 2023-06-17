#include<iostream>
using namespace std;
int main()
{
    int a, b;
    // cout<<"The value of a==b is " <<(a==b)<<endl;
    // cout<<"The value of a<=b is " <<(a<=b)<<endl;
    // cout<<"The value of a>=b is " <<(a>=b)<<endl;
    cout<<"Give the Value of a:\n";
    cin>>a;
    cout<<"Give the Value of b:\n";
    cin>>b;
    cout<<"The value of a==b && a>=b is" <<((a==b) && (a>=b))<<endl;
    cout<<"The value of a==b || a>=b is" <<((a==b) || (a<=b))<<endl;
    cout<<"The value of a==b ! a>=b is" <<(!(a==b))<<endl;


    return 0;
}