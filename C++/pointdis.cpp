#include<iostream>
#include<math.h>
using namespace std;

class points{
    friend differece(points,points);
    float x,y;
    public:
    points(int a,int b){
        x= a;
        y= b;
    }
    displaypoint(){
        cout<<"The value of points is ("<<x<<" "<<y<<")"<<endl;
    }
    // void distance(){
    //     xy=sqrt(((x2*x2)-(x1*x1))+((y2*y2)-(y1*y1)));
    // }
    // displaydistance(){
    //     cout<<"The Distance between two coordinates are "<<xy<<endl;
    // }
};

differece(points o1, points o2){
int d1= o2.x-o1.x;
int d2= o2.y-o1.y;
float diff= sqrt((d1*d1)+(d2*d2));
cout<<"The distance between is "<<diff<<endl;
}
int main()
{
    points a1(70,0),a2(1,0);
    a1.displaypoint();
    a2.displaypoint();
    cout<<endl<<endl;
    differece(a1,a2);

    return 0;
}