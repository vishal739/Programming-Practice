#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* b;
    b= &a;
    int** c= &b;

    cout<< "The address of c is "<<&b<<endl;
    cout<< "The address of &b is "<<c<<endl;
    cout<< "The value of C is "<<*c<<endl;
    cout<< "The value of C is "<<**c<<endl;
    

    return 0;
}