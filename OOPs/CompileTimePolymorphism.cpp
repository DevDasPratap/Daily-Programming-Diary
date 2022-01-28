//Compile Time Polymorphism
class hello{
    public:
    void sayHello(){
        cout<<"Hello DevDas"<<endl;
    }
    void sayHello(string name){
        cout<<"Hi, DevDas"<<endl;
    }
    void sayHello(string name, int n){
        cout<<"DevDas Pratap"<<endl;
    }
    void sayHello(int n){
        cout<<"Bye Bye"<<endl;
    }
};
int main(){
    hello obj;
    obj.sayHello();
    return 0;
};
