/* Abstract class- A clas contain atleast one pur virtual
function . We can't declare the object of abstract class.

Pure virtual function are virtual function which have no defination.They start with
virtual keyword and ends with equal to zero*/
#include<iostream>
using namespace std;
class A{
public:
virtual void show()=0;
void disp(){
    cout<<"Hii i am base class";
}
};
class B:public A{
public:
void show(){
    cout<<"Hii i aam derived class";
}
};
int main(){
    B ob;
    ob.show();
    return 0;
}
