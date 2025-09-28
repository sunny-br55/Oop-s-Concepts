//OVERLOADING ++ / -- OPERATOR
#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void getdata(){
        cout<<"\nEnter no. :";
        cin>>x;
    }
    void putdata(){
        cout<<x;
    }

    void operator++(){
        x=x+1;
    }
};
int main(){
    demo aa;
    aa.getdata();
    cout<<"\nOriginal Value=";
    aa.putdata();
    ++aa;//agr a++ ho tab upar line 15 ---void oprator++(int)  --- change karege
    cout<<"\nValue after increment=";
    aa.putdata();
    return 0;
}