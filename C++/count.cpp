#include<iostream>
using namespace std;

int main()
{
    int marks[] = {23, 35, 36, 21};
    marks[2] = 37; 
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


//    int* p = marks;
//    cout<<*(p++)<<endl;
//    cout<<*(++p);
      int i;
      int* p = marks;
      for ( i = 0; i < 4; i++)
      {
        cout<<(*p)<<endl;
      }
      


//    cout<<"The Va;ue of Marks 1 is "<<*p<<endl;
//    cout<<"The Va;ue of Marks 1 is "<<*(p+1)<<endl;
//    cout<<"The Va;ue of Marks 1 is "<<*(p+2)<<endl;

   

    return 0;
}