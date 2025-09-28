//mutliple catch statement
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
    catch(int x){
        cout<<"Value of x is zero"<<x;
    }
    catch(char x){
        cout<<"Value of x is char"<<x;
    }
    catch(float x){
        cout<<"Value of x is float"<<x;
    }
    return 0;
}