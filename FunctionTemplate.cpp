#include<iostream>
using namespace std;
template <typename T> 
T add(T x,T y){
    return(x+y);
}
int main(){
    cout<<"Addition of 2 integer 3 and 4 is:"<<add<int>(3,4)<<endl;
    cout<<"Addition of 2 integer 3.4 and 4.2 is:"<<add<float>(3.4f,4.2f)<<endl;
    cout<<"Addition of 2 integer 3.45 and 4.23 is:"<<add<double>(3.45,4.23)<<endl;

    return 0;
}