#include<iostream>
using namespace std;
class money
{
private:
    int ruppes, paisa, taka;
public:
    int dollars, euro;
    void setmoney(int r1, int p1, int t1);
    void getmoney(){
        cout<<"The value of ruppes in forex exchange is "<<ruppes<<endl;
        cout<<"The value of paisa in forex exchange is "<<paisa<<endl;
        cout<<"The value of taka in forex exchange is "<<taka<<endl;
        cout<<"The value of dollars in forex exchange is "<<dollars<<endl;
        cout<<"The value of euro in forex exchange is "<<euro<<endl;
        

    }
};

void money :: setmoney(int r1, int p1, int t1)
{
    ruppes = r1;
    paisa = p1;
    taka = t1;

}

int main()
{
    money value;
    value.dollars=74.23;
    value.euro=90.45;
    value.setmoney(54, 45, 65);

    value.getmoney();

    
    return 0;
}