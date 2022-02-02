#include<bits/stdc++.h>

using namespace std;

class car{
    public:
    char color[10];
    int speed;
    void carFun(int distance, int fuel){
        cout<<"Car has covered: "<<distance<<" and has consumed "<<fuel<<"L fuel"<<endl;
    }
    void milege(float distance, float fuel);

    void carSpeed(){
        cout<<"This car speed is: "<<speed<<endl;
    }
}Audi;
void car::milege(float d, float f){
    float carmilege=d/f;
    cout<<"The car milege is: "<<carmilege<<endl;
}
int main(){
    car carObj;
    carObj.carFun(16, 7);
    Audi.carFun(91, 9);
    carObj.milege(700, 90);
    carObj.speed=90;
    carObj.carSpeed();
    return 0;
}
