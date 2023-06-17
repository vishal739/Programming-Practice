#include<iostream>
using namespace std;
int main()
{
    int firstnumber,secondnumber,sumoftwonumbers;
    cout <<"Enter two integers: ";
    cin >> firstnumber >> secondnumber;
    // sum of two numbers in stored in variable d
    sumoftwonumbers = firstnumber + secondnumber;
    // Prints sum
    cout << firstnumber << "+" << secondnumber << "=" << sumoftwonumbers;
    return 0;
}