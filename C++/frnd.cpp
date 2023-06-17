#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex complexsum(complex o1, complex o2);
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
    
};
complex complexsum(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 5);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = complexsum(c1, c2);
    sum.printNumber();

return 0;
}