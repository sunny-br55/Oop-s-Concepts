/*Static member function can access only statics data members.
  Since it is not the part of any object,it is called uisng the class name.*/
  #include<iostream>
  using namespace std;
  class demo{
   int x;
   static int y;
   public:
   void getdata(int a){
    x=a;
    y=y+1;
   }
   void putdata(){
    cout<<"\nX="<<x<<"\nY="<<y<<endl;
   }
   static void abc(){
    cout<<"\nY="<<y;
   }
  };

  int demo::y;
  int main(){
    demo aa;
    aa.getdata(10);
    aa.putdata();

    demo::abc();//static function class se call hota hae na ki object se
    return 0;
  }