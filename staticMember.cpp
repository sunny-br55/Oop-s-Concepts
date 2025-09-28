/*Static Data Member- - it is initialized to zero whenever thhe first object of its class is created. No other initialization is permitted*/
#include<iostream>
using namespace std;
class demo{
int x,y;
static int z;
public:
void getdata(int a,int b){
    x=a;
    y=b;
    z=z+1;
    }
    void putdata(){
        cout<<"X="<<x<<endl<<"Y="<<y<<endl<<"Z="<<z<<endl;

    }
};
int demo::z;
int main(){
    demo aa,bb;
     aa.getdata(5,10);
     bb.getdata(20,30);
     aa.putdata();
     bb.putdata();
     return 0;
}