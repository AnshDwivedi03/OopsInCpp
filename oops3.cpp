#include<bits/stdc++.h>
using namespace std;

class Hero{
public:
int nope;
// constructor called
Hero(){
    cout<<"hii"<<"\n";
}

//parameterized constructor
Hero(int nope){
    cout<<"this ::  "<<this<<endl;
    this->nope=nope;
}
};

int main(){
    Hero h1(20);
    cout<< &h1<<endl;
    // dynamic memory allocation..
   // Hero *h1= new Hero;
}