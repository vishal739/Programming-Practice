#include<iostream>
using namespace std;

int swapreferenceVar(int &a, int &b){
        int temp = a;
        a = b;
        b= temp;
}

int main()
{   int x, y;
    cout<<"Give the value of x and y "<<endl;
    cin>>x>>y;
    cout<<"The Value of x and y is "<<x<<" "<<y<<endl;
    
    swapreferenceVar(x, y);
    cout<<"The Value of x and y is "<<x<<" "<<y<<endl;


    return 0;
}