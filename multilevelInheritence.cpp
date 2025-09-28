#include<iostream>
using namespace std;
class A{
  int roll;
  public:
  void getroll(){
    cout<<"Enter roll:";
    cin>>roll;
  }
  void putroll(){
    cout<<"\nRoll no. ="<<roll;
  }
};
class B:public A{
    protected:
  int sub1,sub2;
  public:
  void getmarks(){
    cout<<"\nEnter marks of 2 sub:";
    cin>>sub1>>sub2;
  }
  void putmarks(){
    cout<<"\nMark 1:"<<sub1;
    cout<<"\nMark 2:"<<sub2;
  }
};
class C:public B{
int sptm;
public:
void getsptm(){
    cout<<"\nEnter Sport Marks:";
    cin>>sptm;
}
void total(){
    putroll();
    putmarks();
    cout<<"\nSports marks="<<sptm;
    cout<<"\nTotal Marks:"<<sub1+sub2+sptm;
    
}
};
int main(){
    C aa;
    aa.getroll();
    aa.getmarks();
    aa.getsptm();
    aa.total();
    return 0;
}