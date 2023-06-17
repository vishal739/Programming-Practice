#include<iostream>
using namespace std;

int main()
{
    // int row, column;
    // cin>>row >>column;
    // for (int i = 1; i <=row; i++)
    // {
    //    for (int j = 1; j <=column ; j++){
        //    if (i==1 || i==row)
        //    {
        //        cout<<"*";
        //    }
        //    else if(j==1 || j==column)
        //    {
        //        cout<<"*";
        //    }
        //    else
        //    {
        //        cout<<" ";
        //    }
    //  }
    //        cout<<endl;
       
       
    // }
    int n;
    cin>>n;
    for ( int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n ; j++)
        {
            if (i<=n-j)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
    
    return 0;
}