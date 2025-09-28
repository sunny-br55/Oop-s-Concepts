#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    try{
        if(b!=0){
            c=a/b;
            cout<<"\nDivision="<<c;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"Divide by "<<b<<"\tError";
    }
    return 0;
}