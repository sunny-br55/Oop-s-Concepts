#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int m,int n){
        a=m;
        b=n;
    }
    void putdata(){
        cout<<"a= "<<a<<"\tb= "<<b;
    }
};
int main(){
    int x,y;//by user given data
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    demo obj(x,y);
    obj.putdata();
    return 0;
}
//by own given data
/*
   int main(){
   demo  obj(5,10);
   obj.putdata();
   return 0;
   }
   
   */