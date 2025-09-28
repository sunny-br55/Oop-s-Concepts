//different opening mode
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream write;
    write.open("text.txt,ios");
    write<<"newest data"<<endl;
    write.close();

    string st;
    ifstream read;
    read.open("text.txt");
    getline(read,st);
    cout<<st;
    read.close();
}