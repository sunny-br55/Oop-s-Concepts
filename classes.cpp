#include<iostream>
using namespace std;
class Hero{
//properties
 private:
 int health;
 public:  
 char level;

int getHealth(){
    return health;
}
char getlevel(){
    return level;
}

void setHealth(int h){
    health=h;
}
void setLevel(char ch){
    level=ch;
}

};

int main(){
    //creation of object
    Hero ramesh;
    cout<<"Ramesh health is"<<ramesh.getHealth()<<endl;
    
    ramesh.setHealth(70);
    ramesh.level='M';
    //cout<<"size : "<<sizeof(h1)<<endl;
    cout<<"health is:"<<ramesh.getHealth()  <<endl;
    cout<<"level is:"<<ramesh.level<<endl;

    return 0;
}

  