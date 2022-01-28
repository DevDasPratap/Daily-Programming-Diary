//Multi Level Inheritance
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
//Single Inheritance
class dog: public animal{

};

//Multi level Inheritance
class boolDog: public dog{

};
int main(){
    dog d;
    d.speak();
    boolDog bd;
    bd.speak();
    cout<<"Age: "<<d.age<<endl;
    return 0;
};
