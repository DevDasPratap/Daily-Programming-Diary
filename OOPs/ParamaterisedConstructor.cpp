#include<bits/stdc++.h>

using namespace std;

class constructorDemo{
    public:
    constructorDemo(int num1, int num2){
        cout<<"This is from constructor"<<endl;
        cout<<(num1+num2)<<endl;
    }
};
int main(){
    constructorDemo obj(10, 6);
    return 0;
}
