#include<iostream>
using namespace std;
class A{
    
    int x;
    public:
    void getdata(){
    cout<<"Enter the number: "<<endl;
    cin>>x;
    }
    void putdata(){
        
        cout<<"value of x:"<<x<<endl;
    }
    
};
class B:public A{
    int y;
    public:
    void getdata(){
    cout<<"Enter the number: "<<endl;
    cin>>y;
    }
    void putdata(){
        cout<<"value of y:"<<y;
    }
    
};
int main(){
    B aa;
    
    
    aa.A::getdata();
    aa.getdata();
    aa.A::putdata();
    aa.putdata();
    return 0;
}