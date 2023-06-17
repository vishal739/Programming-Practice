#include<iostream>
using namespace std;
int main()
{
//     int vishal, amit, vi, hc;
//     cout<<"Tell us Your Vishal"<<endl;
//     cin>>vishal;
//     cout<<"Tell us Your amit "<<endl;
//     cin>>amit;
//     cout<<"Tell us Your vi"<<endl;
//     cin>>vi;
//     cout<<"Tell us Your hc"<<endl;
//     cin>>hc;
//     if((((vishal<12) && (amit<12)) && (vi<12)) && (hc<12))    
//     {
//         cout<<"Go Drink Milk You Cannot come to Party"<<endl;
//     }
//     else if((((vishal<18) && (amit<18)) && (vi<18)) && (hc<18))    
    
//     {
//        cout<<"You Cannot come to Party"<<endl; 
//     }
//      else if((((vishal>60) && (amit>60)) && (vi>60)) && (hc>60))
//     {
//        cout<<"You are too old for party so younCannot come to Party"<<endl; 
//     }
//     else{
//         cout<<"You can come to party";
//     }
    int age;
    cout<<"Tell us your age"<<endl;
    cin>>age;
    switch (age)
    {
        case 18:
        cout<<"You cant come to party"<<endl;
        break;
        case 60:
        cout<<"You can Come to Party"<<endl;
        break;
        default:
        cout<<"You are Too Old for the party "<<endl;
        break;
    
    }


    return 0;
}