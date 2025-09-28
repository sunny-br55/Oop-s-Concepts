 #include<iostream>
 using namespace std;
 template <typename T>
 class Weight{
    private:
    T kg;
    public:
    void setdata(T x){
        kg=x;
    }
    T getData(){
        return kg;
    }
 };
 int main(){
    Weight <int>obj1;
    obj1.setdata(5);
    cout<<"Value is: "<<obj1.getData()<<endl;

    Weight<double>obj2;
    obj2.setdata(5.25235658);
    cout<<"Value is: "<<obj2.getData()<<endl;

    Weight<float>obj3;
    obj3.setdata(5.25f);
    cout<<"Value is: "<<obj3.getData()<<endl;

    return 0;
 }