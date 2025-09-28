//EQUALITY OPERATOR ==
#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void getdata(){
        cout<<"\nEnter a number:";
        cin>>x;
    }
    void putdata(){
        cout<<x;
    }

    bool operator==(demo bb){
      if(x==bb.x)
      return true;
      else
      return false;
    }
};

int main(){
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    if(aa==bb)
    cout<<"Value are equal";
    
    else
    cout<<"unequal";

    return 0;
}