#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex);
    int sumCompcomplex(complex, complex);
};
class complex
{

private:
    
    int a,b;
    friend int calculator:: sumRealcomplex(complex, complex);
    friend int calculator:: sumCompcomplex(complex, complex);
   public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printcomp()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setdata(4, 6);
    c2.setdata(5, 6);

    calculator cal;
    int res = cal.sumRealcomplex(c1, c2);
    cout << "The sum of Real Number is " << res << endl;
    int rec = cal.sumCompcomplex(c1, c2);

    cout << "The sum of Complex Number is " << rec << endl;

    return 0;
}