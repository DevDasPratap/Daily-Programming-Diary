//Multiple Inheritance
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class human{
    public:
    string color;
    public:
    void talk(){
        cout<<"Talking"<<endl;
    }
};
//Multiple Inheritance
class hybrid: public animal, public human{

};
int main(){
    hybrid hb;
    hb.speak();
    hb.talk();
    return 0;
};
