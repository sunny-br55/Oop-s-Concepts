//Adding complex number using + operator
#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
    void getdata(){
        cout<<"\n Enter real and imaginary: ";
        cin>>r>>i;
    }
    void putdata(){
        cout<<"\nReal="<<r<<"\tImaginary="<<i;
    }

    complex operator+(complex bb){
        complex cc;
        cc.r=r+bb.r;
        cc.i=i+bb.i;
        return cc;
    }
};
int main(){
    complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}