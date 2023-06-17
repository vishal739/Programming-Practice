#include<iostream>
using namespace std;
int sum (int , int );
void g(void){
    cout<<"This is a practice program"<<endl;
}
int main()
{
    int num1, num2;

    cout<<"Give The value of Num1 "<<endl;
    cin>>num1;
    cout<<"Give The value of Num2 "<<endl;
    cin>>num2;

    cout<<"The Sum of Num1 and Num2 is "<<sum(num1, num2)<<endl;
    
    g();
            

    return 0;
}
int sum(int a, int b)
{
    int c= a+b;

}