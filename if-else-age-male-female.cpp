#include <iostream>
using namespace std;


int main() {
int age;
cout<<"Enter a your age: ";
cin>>age;
char gender;
cout<<"Enter your gender M or F: ";
cin>>gender;

if(gender == 'M' || gender == 'm'){
  cout<<"Male ";
  if(age < 18){
    cout<<"Kid";
  }
  else{
    cout<<" Adult";
  }
  }
  if(gender == 'F' || gender == 'f'){
    cout<<"Female ";
  }
  if(age < 18 ){
    cout<<"Kid";
  }
  else{
    cout<<"Adult";
  }

    return 0;
}
