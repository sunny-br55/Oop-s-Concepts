#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream write("text.txt");//for writing in file
    write<<"I'm studying file handling"<<endl;

     
    string st;
    ifstream read("text.txt");//for reading in file
    getline(read,st);//getline for reading whole line
    cout<<st;
     return 0;
}
