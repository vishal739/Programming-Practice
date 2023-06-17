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