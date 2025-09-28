//single catch statement
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"\nEnter value: ";
    cin>>x;
    try{
        if(x==0)
        throw(x);
        if(x==100)
        throw('E');
        if(x==1000)
        throw(5.5f);
    }
    catch(...){
        cout<<"\nSome Error Happned..."<<x;
    }
   
    return 0;
}