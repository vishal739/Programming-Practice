#include<iostream>
#include<string>
using namespace std;
class binary
{
private:
    string s;
public:
    void read(void);
    void chekbin(void);
    void display(void);
    void ones(void);
};

    

void binary :: read(void){
    cout<<"Give the value "<<endl;
    cin>>s;
}

void binary :: chekbin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"This is not a binary number "<<endl;
            exit(0);
        }
        
    }
}



void binary::ones(void)
{
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}
    void binary :: display(void){
    cout<<"Displaying Your Binary Number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}





int main()
{
    binary b;
    b.read();
    b.chekbin();
    b.display();
    b.ones();
    b.display();

    return 0;
}