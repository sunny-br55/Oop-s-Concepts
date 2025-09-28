#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"Base class";
    }
};
class B:public A{
public:
void display(){
    cout<<"Derived class";
}
};
int main(){
    B aa;
    aa.display();//derived class ko call karega
    aa.A::display();//aur agar jab yee use kare ge tab base class call hoga
    return 0;
}
//ek function nee dusare function ko override kar liya
//Define --> Suppose we have two class having same signature,so in this case ,obviously object of derived class is created and when calling that function the function of derived class is class and exectued. so here the function of derived class has ovverider the function of base class.

