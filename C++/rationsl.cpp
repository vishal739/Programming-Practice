#include <iostream>
using namespace std;
class rational
{
private:
    float a, b, n, z, d;

public:
    void setData(void);
    void getData(void);
    void ration(void);
};

void rational::setData()
{
    cout << "Give the value of A" << endl;
    cin >> a;
    cout << "Give the value of B" << endl;
    cin >> b;
    cout << "Give the value of n" << endl;
    cin >> n;
}

void rational::getData()
{
    d = (b-a) / (n + 1);
}

void rational::ration()
{
    for (int i = 1; i <= n; i++)
    {
        z = a + (i * d);
        cout << n << " No. of rational number between " << a << " and " << b << " is " << z << endl;
    }
    
}
int main()
{
    rational cal;
    cal.setData();
    cal.getData();
    cal.ration();

    return 0;
}