#include<iostream>
using namespace std;
class A{
    public:
    void message(){
        cout<<"\nWelcome to inheritance";
    }
};
class B:public A{
public:
void display(){
    cout<<"\nInside class B:";
}
};
class C:public A{
    public:
    void putdata(){
        cout<<"\nInside class C";
    }
};
int main(){
    B aa ;
    C bb;
    aa.display();
    aa.message();
    bb.putdata();
    bb.message();
    return 0;
}