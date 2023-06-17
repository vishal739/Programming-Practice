// #include<iostream>
// using namespace std;
// int table(int a){
//     for (int i = 1; i <= 10; i++)
//     {
//         cout<<a<<"*"<<i<<"="<<a*i<<endl;
//     }
//     }
    


// int main()
// {
//     int x;
//     cout<<"Give The Value of x whose Table you want "<<endl;
//     cin>>x;
//     table(x);
//     // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<x<<"*"<<i<<"="<<x*i<<endl;
    // }
    //     return 0;
// }


#include<iostream>
using namespace std;
void fib(int n){
int t1=0;
int t2=1;
int nextterm;
for (int i = 1; i <=n; i++)
{   
    cout<<t1<<endl;   //1
    nextterm= t1 + t2;//1
    t1= t2;           //1
    t2= nextterm;
}
return;
}

int main()
{   
    int n;
    cout<<"Give the value "<<endl;
    cin>>n;
    fib(n);

    return 0;
}