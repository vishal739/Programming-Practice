#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class stringf
{
private:
    string s, a, b;

public:
    void display(void);
    void lengthat(void);
    void clear(void);
    void append(void);
    void substr(void);
    void erase(void);
    void getline(void);
    void compare(void);
    void chkempty(void);
    void indv(void);
    void strint(void);
    void intstr(void);
    void sort(void);
};

void stringf ::display()
{
    cout << s << endl
         << a << endl
         << b << endl;
}

void stringf ::lengthat(void)
{

    int x;
    cout << "Give the Value of S " << endl;
    cin >> s;
    cout << "Give the Value of x " << endl;
    cin >> x;
    cout << "Give the Value of a for append " << endl;
    cin >> a;
    cout << "Give the Value of b " << endl;
    cin >> b;
    cout << "The Length of string is " << s.length() << endl;
    cout << "The char at index x is " << s.at(x) << endl;
}

void stringf ::clear()
{
    s.clear();
}

void stringf ::chkempty()
{
    s.empty();
    cout << "Given String is empty" << endl;
}

void stringf ::append()
{
    a.append(b);
    cout << "The string append and result is '" << a << endl;
}

void stringf ::substr()
{
    string z = s.substr(4, 2);
    cout << "The sub string is " << z << endl;
}

void stringf ::compare()
{
    cout << "Compare = " << a.compare(b) << endl;
}

void stringf ::strint()
{
    string f;
    cout << "Give value" << endl;
    cin >> f;
    int x = stoi(f);
    cout << "The Value is " << x + 2 << endl;
}
// void stringf :: sort(){
//     string s1 = "xjmcjbkzjb" ;

//     sort(s1.begin(), s1.end());
//     cout<<s1<<endl;
// }
void stringf ::intstr()
{
    int f = 42;
    cout << to_string(f) + "2" << endl;
}
void stringf ::indv()
{
    a.insert(2, "hi");
}

int main()
{
    // string s= "venomisop";
    // cout<<s.length()<<endl;
    // cout<<s.at(5)<<endl;
    stringf prog;
    prog.lengthat();
    prog.clear();
    prog.chkempty();
    prog.append();
    prog.substr();
    prog.compare();
    prog.strint();
    // prog.sort();
    prog.intstr();
    prog.indv();

    return 0;
}