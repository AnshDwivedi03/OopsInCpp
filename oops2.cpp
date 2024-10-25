#include<bits/stdc++.h>
using namespace std;


class Temp{
    int hea;
    char ch;
   string str;
};


class Hero{
public:
char level;
int score=12;


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
    Hero H1;
    // dynamic memory allocation..
    Hero *h1= new Hero;

    cout<<(*h1).score<<endl;
    cout<<h1->score<<endl;

   /*
   cout<<H1.getHealth()<<"\n";
   Temp t1;
   cout<<sizeof(t1)<<endl;

   //using setter
   H1.setHealth(50);
    cout<<H1.getHealth()<<endl;
    return 0;
   */
}