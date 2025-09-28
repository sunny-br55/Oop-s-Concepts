#include<iostream>
using namespace std;
class A{
    public:
    void putdata(){
        cout<<"\nInside class A";
    }
};
class B:public A{
    public:
    void display(){
        cout<<"\nInside class B";
    }
};
class C{
    public:
    void message(){
        cout<<"\nInside class C";
    }
};
class D:public B,public C{
    public:
    void print(){
        cout<<"\nInside class D";
    }
};
int main(){
    D dd;
    dd.print();
    dd.display();
    dd.message();
    dd.putdata();
    return 0;
}