#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
     void input(){
        cout<<"Enter the number:";
        cin>>a;
     }
};
class B{
    protected:
    int b;
    public:
    void getdata(){
        cout<<"\nEnter the numer";
        cin>>b;
    }
};

class C:public A,public B{
    public:
    void putdata(){
        cout<<"Addition is:"<<a+b;
    }
};
int main(){
    C v;
    v.input();
    v.getdata();
    
    v.putdata();
    return 0;
}
