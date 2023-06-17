#include <iostream>
using namespace std;
class shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Give the Id of item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Give the price of item " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of itemid " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    // dukan.setPrice;
    // dukan.setPrice;
    dukan.displayPrice();

    return 0;
}