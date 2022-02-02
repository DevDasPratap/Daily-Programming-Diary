#include<bits/stdc++.h>

using namespace std;

class Baap{
    public:
     Baap(){
        cout<<"Hey, i am parent"<<endl;
    }
    string family="Hello Dev Das";
};
class Beta: public Baap{
    public:
     Beta(){
        cout<<"I am child of my parent"<<endl;
    }
};
int main(){
    Beta obj;
    cout<<"Family name: "<<obj.family<<endl;
    return 0;
}
