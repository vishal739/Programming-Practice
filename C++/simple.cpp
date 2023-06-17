#include <iostream>
using namespace std;

class Bank
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    void display(void);
    Bank() {}
    Bank(int p, int y, float r)
    {
        principle = p;
        years = y;
        interestrate = r;
        returnvalue = principle;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1+interestrate);
        }
    } 
    Bank(int p, int y, int r)
    {
        principle = p;
        years = y;
        interestrate = float(r)/100;
        returnvalue = principle;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 +interestrate);
        }
    }
};

void Bank::display()
{
    cout << " The principle amount is " << principle
         << " for " << years << " years " << endl
         << " The Return Value is " << returnvalue << endl;
}
int main()
{
    Bank b1, b2, b3;
    int p, y;
    int R;
    float r;
    cout << "Give the value of p,y and r" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.display();
    
    cout << "Give the value of p,y and r" << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.display();

    return 0;
}

// #include<iostream>
// using namespace std;


// class BankDeposit{
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){}
//         BankDeposit(int p, int y, float r); // r can be a value like 0.04
//         BankDeposit(int p, int y, int r); // r can be a value like 14
//         void show();
// };
// BankDeposit :: BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// BankDeposit :: BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// void BankDeposit :: show(){
//     cout<<endl<<"Principal amount was "<<principal
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }
// int main(){
//     BankDeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;
    
    
//     cout<<"Enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout<<"Enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }
