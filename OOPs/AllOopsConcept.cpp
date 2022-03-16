#include<bits/stdc++.h>

using namespace std;
//Class (Access spacifier-> public, private)
// class phone{
//     private:
//     int camera;
//     int ram;
//     public:
//     int storage;
//     void setData(int _camera, int _ram, int _storage){
//         camera=_camera;
//         ram=_ram;
//         storage=_storage;
//     }
//     void getData(){
//         cout<<"Camera: "<<camera<<endl;
//         cout<<"Ram: "<<ram<<endl;
//         cout<<"Storage: "<<storage<<endl;
//     }
// };
// int main(){
//     phone p;
//     p.setData(16, 4, 32);
//     //p.ram=8; //update with public (access spicifier)
//     p.storage=100;
//     p.getData();
//     return 0;
// }


// class student{
//     private:
//     int sub_a;
//     int sub_b;
//     public:
//     string name;
//     void setResult(int s_a, int s_b, string _name){
//         sub_a=s_a;
//         sub_b=s_b;
//         name=_name;
//     }
//     void getResult(){
//         cout<<"Sub a: "<<sub_a<<endl;
//         cout<<"Sub b: "<<sub_b<<endl;
//         cout<<"Name: "<<name<<endl;
//     }
// };

// int main(){
//     student st; //store in stack memory(. (dot)operator)
//     st.setResult(70, 91, "Pratap");
//     st.name="Pratap Das";
//     st.getResult();

//     //many object
//     student s;
//     s.setResult(71, 90, "Dev");
//     s.getResult();

//     student stu;
//     student *sd=new student(); //heap memory(-> (Arrow)operator)
//     stu.setResult(50, 75, "Das");
//     sd->setResult(80, 70, "Heap");
//     sd->getResult();




//     return 0;
// }


// class student{
//     private:
//     int sub_a;
//     int sub_b;
//     public:
//     string name;
//     void setResult(int, int, string);
//     // {
//     //     // sub_a=s_a;
//     //     // sub_b=s_b;
//     //     // name=_name;
//     // }
//     void getResult(){
//         cout<<"Sub a: "<<sub_a<<endl;
//         cout<<"Sub b: "<<sub_b<<endl;
//         cout<<"Name: "<<name<<endl;
//     }
// };
// // function scoping
// void student :: setResult(int s_a, int s_b, string _name){
//         sub_a=s_a;
//         sub_b=s_b;
//         name=_name;
// };
// int main(){
//     student st; //store in stack memory(. (dot)operator)
//     st.setResult(70, 91, "Pratap");
//     st.name="Pratap Das";
//     st.getResult();

//     //many object
//     student s;
//     s.setResult(71, 90, "Dev");
//     s.getResult();

//     student stu;
//     student *sd=new student(); //heap memory(-> (Arrow)operator)
//     stu.setResult(50, 75, "Das");
//     sd->setResult(80, 70, "Heap");
//     sd->getResult();

//     return 0;
// }


//constructor(spacial member function, same name as class name, does not have any return type)
//constructor 2type-> 1. default constructor(no argument), 2. parameterise constructor(accept argument)
// class person{
//     public:
//     string name;
//     int age;
//     //defalut constructor
//     // person(){
//     //     cout<<"I am constructor"<<endl;
//     //     name="Name please";
//     //     age=0;
//     // }
//     //Parameterise constructor
//     person(string _name, int _age){
//         name=_name;
//         age=_age;
//     }
//     void display(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//     }
// };
// int main(){
//     // person p;
//     // p.display();

//     person p("Pratap", 26);
//     p.display();


//     return 0;
// }


//polymorphism(using fuction more then one purpose use)
//2type 1.run time polymorphism(overriding) 2.compile time polymorphism(overloading)
//Overiding
// class a{
//     public:
//     void display(){
//         cout<<"A";
//     }
// };
// class b: public a{
//     public:
//     void display(){
//         cout<<"B";
//     }
// };

// int main(){
//     b bb;
//     bb.display();
//     return 0;
// }
//overloading(1.fun same, 2.diff argument, 3.diff return type)

// class person{
//     public:
//     string name;
//     int age;
//     //defalut constructor
//     person(){
//         cout<<"I am constructor"<<endl;
//         name="Name please";
//         age=0;
//     }
//     //Parameterise constructor
//     person(string _name, int _age){
//         name=_name;
//         age=_age;
//     }
//     void display(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//     }
//     //destructor
//     ~person(){
//         cout<<"Destructor is called"<<endl;
//     }
// };
// class addition{
//     public:
//     int sum(int a){
//         return a;
//     }
//     int sum(int a, int b){
//         return a+b;
//     }
//     double sum(double a, double b){
//         return a+b;
//     }
// };
// int main(){
//     person p;
//     p.display();

//     // person pa("Pratap", 26);
//     // pa.display();
//     // addition a;
//     // cout<<a.sum(4)<<endl;
//     // cout<<a.sum(4,5)<<endl;
//     // cout<<a.sum(5.5, 10.5)<<endl;

// //destructor(deallowcate memory: remove object after end task)

//     return 0;
// }






//friend function
// class frndFun{
//     string name;
//     public:
//     void setName(string _name){
//         name=_name;
//     }
//     friend void display(frndFun f);
// };
// void display(frndFun f){
//     cout<<f.name;
// }
// int main(){
//     frndFun ff;
//     ff.setName("Pratap");
//     display(ff);
// }


//Inheritance
//access class a to class b
// Online C++ compiler to run C++ program online
// class college{
//     public:
//     string collegeName;
//     void setCollegeName(string _collegeName){
//         collegeName=_collegeName;
//     }
// };
// class student : public college{
//     string studentName;
//     public:
//     void setStudentName(string _sName){
//         studentName=_sName;
//     };
//     void display(){
//         cout<<"College name: "<<collegeName<<endl;
//         cout<<"Student name: "<<studentName<<endl;
//     };
// };
// int main(){
//     student s;
//     s.setCollegeName("GCETTB");
//     s.setStudentName("Pratap Das");
//     s.display();
//     return 0;
// }





//Access             Public         protected    private
//withinClass          yes            yes          yes
//subclass             yes            yes          no
//outsiteClass         yes            no           no
// class college{
//     public:
//     string collegeName;
//     void setCollegeName(string _collegeName){
//         collegeName=_collegeName;
//     }
// };
// //subclass/inherit/derived class/ child class
// class student : public college{
//     protected:
//     string studentName;
//     public:
//     void setStudentName(string _studentName){
//         studentName=_studentName;
//     }
//     void getData(){
//         cout<<"College: "<<collegeName<<endl;
//         cout<<"Name: "<<studentName<<endl;
//     }
// };
// int main(){
//     student s;
//     s.collegeName="GCETTB";
//     s.setStudentName("Pratap");
//     s.getData();
//     return 0;
// }



// class college{
//     protected:
//     string name;
//     public:
//     void setName(string _Name){
//         name=_Name;
//     }
// };
// //subclass/inherit/derived class/ child class
// class student : public college{
//     public:
//     void getData(){
//         cout<<"College: "<<name<<endl;
//     }
// };
// int main(){
//     student s;
//     s.setName("GCETTB");
//     s.getData();
//     return 0;
// }


//types of inheritance
//single level a->b
//Multiple level a-> b <-c

// class b{
//     public:
//     b(){
//         cout<<"B ";
//     }
// };
// class c{
//     public:
//     c(){
//         cout<<"C ";
//     }
// };
// class a:public b, public c{
//     public:
//     a(){
//         cout<<"A ";
//     }
// };
// int main(){
//     a aa;
//     b bb;
//     c cc;
//     return 0;
// }
//Multi level a-> b ->c (a=base, b=derived/child for a and b is base for c)
// class c{
//     public:
//     c(){
//         cout<<"C ";
//     }
// };
// class b: public c{
//     public:
//     b(){
//         cout<<"B ";
//     }
// };
// class a:public b{
//     public:
//     a(){
//         cout<<"A ";
//     }
// };
// int main(){
//     a aa;
//     b bb;
//     c cc;
//     return 0;
// }

//Hirechical b<- a ->c
// class a{
//     public:
//     a(){
//         cout<<"A ";
//     }
// };
// class b: public a{
//     public:
//     b(){
//         cout<<"B ";
//     }
// };
// class c: public a{
//     public:
//     c(){
//         cout<<"C ";
//     }
// };

// int main(){
//     a aa;
//     b bb;
//     c cc;
//     return 0;
// }

//Hybrid a->c<-b->d->e
// class a{
//     public:
//     a(){
//         cout<<"A ";
//     }
// };
// class b{
//     public:
//     b(){
//         cout<<"B ";
//     }
// };
// class c: public a, public b{
//     public:
//     c(){
//         cout<<"C ";
//     }
// };
// class d: public b{
//     public:
//     d(){
//         cout<<"D ";
//     }
// };
// class e: public d{
//     public:
//     e(){
//         cout<<"E ";
//     }
// };

// int main(){
//     a aa;
//     b bb;
//     c cc;
//     d dd;
//     e ee;
//     return 0;
// }

//Abstraction
