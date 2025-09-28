#include<iostream>
using namespace std;
class demo{
    int a,b,x,y;
    public:
    demo()//Default Constructor
    {
        a=50;
        b=150;
        x=25;
        y=5;
    }
    void putdata(){
        cout<<"a= "<<a<<"\tb= "<<b<<endl;
    }
    void show(){
        cout<<"x= "<<x<<"\ty= "<<y;
    }
};
int main(){
    demo obj;
    obj.putdata();
    obj.show();
    return 0;
}