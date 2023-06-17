#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n, b, i = 1,flag=0;
    cin >> b >> n;
    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (i = b; i <= n; i++)
    {
        if (i >= 1 && i <= 9)
        {
            cout << a[i] << endl;
            break;
        }
    }
    if (n > 9 || b > 9)
    {
        if (n % 2 == 0)
        {
            cout << "even";}
        else if (b % 2 == 0)
        {
                cout<< "even";
        }
        
        else if (n > 9)
        {
            if (n % 2 != 0)
                cout << "odd";
            else if (b % 2 != 0)
            {
                cout << "odd";
            }
        }
    }

    // if (b<9){
    // for ( i=1; i<=b; i++)
    // {
    //     if (i==b)
    //     {
    //         cout<<a[i]<<endl;
    //     }
    //     break;
    // }
    // if(n>9){
    //     if (n%2==0)
    //     {
    //         cout<<"even";
    //     }
    //     else{
    //         cout<<"odd";
    //     }
    // else if(b>9 || n>9){
    //     if (b%2==0 && n%2==0 )
    //     {
    //         cout<<"even";
    //         cout<<"even";
    //     }
    //     else if(b%2!=0 && n%2!=0){
    //         cout<<"odd";
    //         cout<<"odd";

    //     }
    //     else if (b%2!=0 || n%2!=0)
    //     {
    //         cout<<"odd";
    //     }
    //     else if (b%2==0 || n%2==0 )
    //     {
    //         cout<<"even";
    //     }

    return 0;
}
