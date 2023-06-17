#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int x, int y=4){
    a= x;
    b= y;
}
//     complex(int x, int y){
//     a= x;
//     b= y;
// }
//     complex(int x=1, int y=4){
//     a= x;
//     b= y;
// }
    // complex();

   
    printnumber(){
        cout<<"The Sum of the complex no. "<<a<<" and "<<b<<" is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1(4,1),c2(4),c3(4,6);
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    return 0;
}


