#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int fac(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int main()
{
    int a;
    cout << "give us value which factorial you want " << endl;
    cin >> a;
    cout << "The Factorial of " << a << " is " << fib(a) << endl;
    return 0;
}