#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void input(){
        cout<<"\nEnter number:";
        cin>>x;
        }
        int getx(){//Accessor function
            return x;
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
    cout<<"\nAddition="<<getx()+y;
}
};
int main(){
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}