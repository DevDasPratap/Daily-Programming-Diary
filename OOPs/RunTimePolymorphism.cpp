//Run Time Polymorphism
class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class dog: public animal{
    public:
    void speak(){
        cout<<"Dog Barking"<<endl;
    }
};
int main(){
    dog obj;
    obj.speak();
}
