#include<bits/stdc++.h>
using namespace std;
class Papa{
    public:
int age=5;

};
class Mumma{
    public:
string name;

};

class Beta : public Papa, public Mumma{
public:
int color;


};
int main(){
    Beta b1;
cout<<b1.age<<endl;
cout<<b1.name<<endl;
cout<<b1.color<<endl;


    return 0;
}