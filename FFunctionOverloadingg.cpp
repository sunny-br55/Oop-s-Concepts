/*Function Overloading-- Function overloading is a concept of polmorphism .It enables us to write same name 
  multiple function within a program. But we have a restrictions that all the function having same name must follow :
  > Differences should be in 1. number of argument 2. type of argument */
  #include<iostream>
  using namespace std;
  void add(int a,int b){
    cout<<"Addition="<<a+b<<endl;
  }
  void add(int a,float b){
    cout<<"Addition="<<a+b<<endl;
  }
  void add(int a,int b,int c){
    cout<<"Addtioin="<<a+b+c<<endl;
  }
  int main(){
    add(2,3);
    add(5,2.5f);//2.5 ko 2.5f likhe float karne ke liye
    add(5,2,3);
    return 0;
  }
