//Compile Time Polymorphism (Overload)
class a{
    public:
    int b, c;
    public:
    int add(){
        return b+c;
    }
    void operator+(a &obj){
        int value1= this->b;
        int value2= obj.b;
        cout<<"Overload sum to substract output: "<<value2 - value1<<endl;
    }
};
int main(){
    a obj, objs;
    // obj.b=4;
    // obj.c=5;
    // cout<<obj.add()<<endl;

    obj.b=10;
    objs.b=26;

    obj+objs;
    return 0;
}
