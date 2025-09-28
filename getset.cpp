#include<iostream>
using namespace std;
class KG{
    private:
    int p;
    int q;
    public:void setP(int input){
        p=input;
        q=p*4;
    }
    int getQ(){
    return q;
    }
};
int main(){
    KG obj;
    obj.setP(82);
    cout<<"Q="<<obj.getQ();
    return 0;
}