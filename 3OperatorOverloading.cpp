//ASSIGNMENT OPERATOR =
#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"\nEnter a number";
        cin>>a;
    }
    void putdata(){
        cout<<"\nvalue="<<a;
    }

    void operator=(demo bb){
        a=bb.a;
        
    }
};

int main(){
    demo aa,bb;
    bb.getdata();
    aa=bb;
    aa.putdata();
    bb.putdata();
    return 0;
}