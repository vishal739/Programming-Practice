#include<iostream>
using namespace std;
int money(int c, float d= 4.2){
    return c*d;
}
int main()
{
    // int x, y;
    // cout<<"Give the value of a and b "<<endl;
    // cin>>x>>y;
    // cout<<"The product of a and is "<<multi(x,y)<<endl;
    int cmoney;
    cout<<"give the value of money "<<endl;
    cin>>cmoney;
    cout<<"The amount which you will get after 1 year is "<<money(cmoney,1.2);

    return 0;
}