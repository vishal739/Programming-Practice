#include<iostream>
using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;
public:
    void initcounter(void){counter=0;}
    void getitem(void);
    void displayitem(void);
};
void shop ::getitem(void){
    cout<<"Enter Item id for item no. "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the Price item no. "<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayitem(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"The price of item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}



int main()
{
    shop s;
    int n;
    cin>>n;
     s.initcounter();
    
        for ( int i = 0; i < n; i++)
        {
           s.getitem();
        }
    s.displayitem();
    
    return 0;
}