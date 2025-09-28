#include<iostream>
using namespace std;
class KG{
    public:
    void func(int x){
        cout<<"Value of x is:"<<x<<endl;
    }
    void func(double x){
         cout<<"Value of x is:"<<x<<endl;
    }
    void func(int x, int y){
        cout<<"value of x is:"<<x<<" "<<"value of y is:"<<y<<endl;
    }
};
int main(){
    KG obj;
    obj.func(8);
    obj.func(9.2);
    obj.func(2,54);
    return 0;
}