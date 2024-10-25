#include<bits/stdc++.h>
#include "DemoD3.cpp"
using namespace std;
class Demo{

};

class Hero{
public:
char name[100];
char level;



private:
int health;

public:
int getHealth(){
    return health;
}
void setHealth(int h){
health=h;
}


};

int main(){

    Hero h1;
    Demo h2;
    DemoD3 h3;
   // h1.health=50;
    cout<<sizeof(h1)<<endl;
    /*You cant use member of class or the property of class without declearign access specifier
    cout<<h1.health<<endl;
    */
   cout<<h1.getHealth()<<"\n";


   //using setter
   h1.setHealth(50);
    cout<<h1.getHealth()<<endl;



    cout<<sizeof(h2)<<endl;
    cout<<sizeof(h3)<<endl;
    return 0;
}