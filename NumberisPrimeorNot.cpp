#include <iostream>

using namespace std;

int main() {
  int num, i=1, check=0;
  cout<<"Enter a number: ";
  cin>>num;
  while(i<=num){
    if(num%i==0){
      check++;
    }i++;
  }if(check==2){
    cout<<num<<" is prime number";
  }else{
    cout<<num<<" is not prime number";
  }
    return 0;
}
