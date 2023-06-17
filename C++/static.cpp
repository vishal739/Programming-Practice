#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(){
    cout<<"Give the value of id "<<endl;
    cin>>id;
    count++;
}
    void getdata(){
    cout<<"The id of employee no. "<<count<<" is "<<id<<endl;
}
static void getcount(){
    cout<<"The value of count is "<<count<<endl;
}
// int employee:: count;

};
// void employee ::getdata(){
//     cout<<"Give the value of id "<<endl;
//     cin<<id;
//     count++;
// }
// void employee ::setdata(){
//     cout<<"The id of employee no. "<<count<<" is "<<id<<endl;
// }

int employee:: count;

int main()
{
    employee vishal, nishit, nomish;
    vishal.setdata();
    vishal.getdata();
    employee ::getcount();

    nishit.setdata();
    nishit.getdata();
    return 0;
}