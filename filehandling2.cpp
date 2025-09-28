#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //by open method
    ofstream write;
    write.open("text.txt");
    write<<"Hii how are you buddy";
    write.close();

    string st;
    ifstream read;
    read.open("test.txt");
    getline(read,st);
    cout<<st;
    read.close();
    return 0;
}

