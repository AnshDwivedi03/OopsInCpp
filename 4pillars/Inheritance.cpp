#include<bits/stdc++.h>
using namespace std;
class Papa{
    public:
string name;
int age=5;

};

class Beta : public Papa{
public:
int color;


};
int main(){
    Beta b1;
cout<<b1.age<<endl;
cout<<b1.name<<endl;


    return 0;
}