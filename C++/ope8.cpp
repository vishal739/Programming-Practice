#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    // float a, b, c;
    // cout<<"Give the value of a "<<endl;
    // cin>>a;
    // cout<<"Give the value of b "<<endl;
    // cin>>b;
    // c= a+b; 
    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The Global of c is "<<::c;

    float x, y, z;
    float & i=x;
    
    long double j;

    cout<<"Give the value of x and y"<<endl;
    cin>>x >>y;
    cout<<"Give the value of j"<<endl;
    cin>>j;
    z= ((((x*y)/j))+i);
    cout<<"The Value of z is "<<int(z)<<endl;

    cout<<"The value of x is "<<setw(5)<<(int)x<<endl<<"The Value of y is "<<setw(5)<<(int)y<<endl<<"The Value of i is "<<setw(5)<<i<<endl<<"The Value of j is "<<setw(5)<<(bool)j<<endl;
    cout<<"The size of x is "<<setw(5)<<sizeof(x)<<endl;
    cout<<"The size of y is "<<setw(5)<<sizeof(y)<<endl;
    cout<<"The size of j is "<<setw(5)<<sizeof(j)<<endl;


    



    return 0;
}
