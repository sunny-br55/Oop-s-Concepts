/*constant data member- these are data variable in class which are made const. Ex-- const int upi=32
 constant member function- A const member function never modifies data member in an object. */
 #include<iostream>
 using namespace std;
 class A{
    const int x=10;// Constant dataa member
    //int x=10;
     public:
     int incr()const// constant member function
      {
        x++;
        cout<<"X="<<x;
     }
 };
 int main(){
    A a;
    a.incr();
    return 0;
 }
 // cont mae baas ham read kar sakte hE