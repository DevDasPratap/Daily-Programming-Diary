#include <bits/stdc++.h>

using namespace std;

class Dev{
    private:
    int health;
    public:
    char *name;
    char level;
    static int timeToComplete;

    void print(){
        cout<<"Print health: "<<health<<endl;
        cout<<"Print level: "<<level<<endl;

        //Shallow copy
        cout<<"Shallow copy called"<<endl;
        name=new char[100];
        cout<<"Name: "<<this->name<<", ";
        cout<<"Health: "<<this->health<<", ";
        cout<<"Level: "<<this->level<<endl;
    }
    //Getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    //Setter
    void setHealth(int h){
         health=h;
    }
    void setLevel(char ch){
         level=ch;
    }
    
    //Shallow copy
    void setName(char name[]){
        strcpy(this->name, name);
    };

    //Constructor called without prameter
    Dev(){
        cout<<"Constructor called without prameter"<<endl;
    }

    //Constructor called with prameterised
    Dev(int health){
        cout<<"this -> "<<this<<endl;
        this -> health=health;
        cout<<"Constructor called with prameterised"<<endl;
    }


    //Constructor called with multiple prameter
    Dev(int health, char level){
        cout<<"this -> "<<this<<endl;
        this -> level=level;
        this ->health=health;
        cout<<"Constructor called with prameterised"<<endl;
    }

    //Copy Constructor
     Dev(Dev& copyc){
     cout<<"Copy Constructor Called"<<endl;
     this -> health=copyc.health;
     this -> level=copyc.level;
     };
    

    // //Destructor
    // `Dev(){
    //     cout<<"Destructor called"<<endl;
    // }
     
     static int fun(){
         //static function access only member
        cout<<"static function called";
     }
};
//Static keyword --> belong object not class
int Dev::timeToComplete=9;
int main(){ 
    //Creation of Object
    //Static memory allocation
    //Dev pratap;

    //Dynamic memory allocation
    // Dev *das= new Dev;

    // cout<<"Health is: "<<(*das).health<<endl;
    //  cout<<"Level is: "<<(*das).level<<endl;

    // cout<<"Health is: "<<pratap.health<<endl;
    // cout<<"Level is: "<<pratap.level<<endl;

    // pratap.health=90;
    // pratap.level= 'A';
    // cout<<"Health is: "<<pratap.health<<endl;
    // cout<<"Level is: "<<pratap.level<<endl;

   // cout<<"Class Size: "<<sizeof(pratap)<<endl;

    //use getter
    // cout<<"Health is: "<<pratap.getHealth()<<endl;
    // cout<<"Level is: "<<pratap.getLevel()<<endl;

    //use setter
    // pratap.setHealth(91);
    // pratap.setLevel('B');
    // cout<<"Health is: "<<pratap.getHealth()<<endl;
    // cout<<"Level is: "<<pratap.getLevel()<<endl;

    //Static memory allocation
    //Dev pratap;

    //Dynamic memory allocation
    //  Dev *das= new Dev;

    // cout<<"Health is: "<<(*das).getHealth()<<endl;
    // cout<<"Level is: "<<(*das).getLevel()<<endl;



    //Constructor called without parameter
    //Static memory allocation
    //Dev pratap;
    //Dynamic memory allocation
     //Dev *das= new Dev;

     //Constructor called with parameter
    //Static memory allocation
    // Dev pratap(10, 'A');
    // //Dynamic memory allocation
    //  Dev *das= new Dev(9, 'B');
    //  cout<<"Address of pratap: "<<&pratap<<endl;
    //  cout<<"Address of das: "<<&das<<endl;
     
    //  pratap.print();
    //  das->print();

     //Copy Constructor
    //  Dev aConstructor(70, 'C');
    //  aConstructor.print();
    //  Dev bConstructor(aConstructor);
    // //  bConstructor.health=aConstructor.health;
    // //  bConstructor.level=aConstructor.level;
    // bConstructor.print();

    //Shallow copy
    Dev dev1;
    dev1.setHealth(91);
    dev1.setLevel('E');
    char name[16]="DevDas";
    dev1.setName(name);
    dev1.print();

    cout<<"Static keyword: "<<Dev::timeToComplete<<endl;

    return 0;
}
