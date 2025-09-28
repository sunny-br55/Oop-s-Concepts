#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void input(){
        cout<<"\nEnter number:";
        cin>>x;
        }
};
class B:public A{
int y;
public:
void getdata(){
    cout<<"\nEnter number:";
    cin>>y;
}
void putdata(){
    cout<<"\nAddition="<<x+y;
}
};
int main(){
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}