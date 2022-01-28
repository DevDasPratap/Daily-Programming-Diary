//Single Inheritance
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
int main(){
    dog d;
    d.speak();
    cout<<"Age: "<<d.age<<endl;
    return 0;
}
