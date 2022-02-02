#include<bits/stdc++.h>

using namespace std;

class Namaste{
    public:
    //Contructor
    Namaste(){
        cout<<"Constructor called"<<endl;
    }
    //Destructor
    ~Namaste(){
        cout<<"Destructor is called"<<endl;
    }
    //Member function
    void memberFun(){
        cout<<"Namaste from member function"<<endl;
    }
};
int main(){
    Namaste obj;
    // obj.~Namaste();
    obj.memberFun();
    return 0;
}
