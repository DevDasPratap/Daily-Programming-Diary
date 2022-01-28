//Inheritance
class human{
    public:
    string name;
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight=w;
    }
};

//Inherit male class from human class
class male: public human{
    public:
    string color;
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};
int main(){
    male object1;
    cout<<"Run Inheritance code"<<endl;
    cout<<"Age: "<<object1.age<<endl;
    cout<<"Weight: "<<object1.weight<<endl;
    cout<<"Height: "<<object1.height<<endl;

    cout<<"Color: "<<object1.color<<endl;

    object1.sleep();

    object1.setWeight(55);
    cout<<"Weight: "<<object1.weight<<endl;

    return 0;
};
