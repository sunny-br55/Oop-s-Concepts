/*using the concept of operator overloadingwe can overload any built in operatot i.e. we can assign a new definition to an existing operator*/
/* Some operator can not be overloaded 
   1. slope resolution operator (::)
   2. class member access operator (.,*)
   3. conditional operator(?,:)
   4. size of operator (sizeof)*/



   //OVERLOADING + OPERATOR
   #include<iostream>
   using namespace std;
   class demo{
      int a;
      public:
      void getdata(){
        cout<<"\nEnter a number:";
        cin>>a;
      }
      void putdata(){
        cout<<"\nValue="<<a;
      }
   
   //cc=aa+bb;  
   demo operator+(demo bb){
    demo cc;
    cc.a=a+bb.a;
    return cc;// ye wala dhyan me rakhna
   }
   };
   int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
   }