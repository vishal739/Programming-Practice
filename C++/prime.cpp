#include<iostream>
#include<math.h>
using namespace std;
bool prime(int a){
    for (int i = 2; i <sqrt(a); i++)
    {
        if (a%i==0)
        {
            return false;
        
        }
        return true;
    }
    
}
int main()
{   
    int x, y;
    cout<<"Give value"<<endl;
    cin>>x>>y;
    for (int i = x; i < y; i++)
    {
        if (prime(i)){
            cout<<i<<endl;
        }
    }
    
    return 0;
}