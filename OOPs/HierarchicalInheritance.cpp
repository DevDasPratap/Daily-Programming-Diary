//Hierarchical Inheritance
class a{
    public:
    void funA(){
        cout<<"Inside function A"<<endl;
    }
};
class b: public a{
    public:
    void funB(){
        cout<<"Imside function B"<<endl;
    }
};
class c: public a{
    public:
    void funC(){
        cout<<"Inside function c"<<endl;
    }
};
int main(){

    a objA;
    objA.funA();

    b objB;
    objB.funA();
    objB.funB();
    
    c objC;
    objC.funC();
    objC.funA();
    return 0;
}
