#include<iostream>
using namespace std;
int count=0;

class demo{
public:
    demo(){
        count++;
        cout<<"\nNo. of object created: " << count;
    }
    ~demo(){
        cout<<"\nNo. of object destroyed: " << count;
        count--;
    }
};

int main(){
    demo aa,bb,cc;
    {
        demo dd;
    }
    return 0;
}