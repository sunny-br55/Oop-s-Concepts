#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age,roll;
    string grade;
   
};
int main()
{
    Student S1;
    S1.name="Rohit";
    S1.roll=2;
    S1.age=25;
    S1.grade="B";

    cout<<S1.grade<<" "<<endl;

    Student S2;
    S2.name="Mohit";
    S2.roll=22;
    S2.age=2;
    S2.grade="B+";

    cout<<S2.grade<<" ";
}  