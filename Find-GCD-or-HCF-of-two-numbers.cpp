//Find GCD or HCF of two numberscpp
#include <iostream>
using namespace std;

int main() {
  int num1, num2, gcd;
  cout<<"Enter two number: ";
  cin>>num1>>num2;
  for(int i=1; i<=num1 && i<=num2; i++){
    if(num1%i==0 && num2%i==0){
      gcd=i;
      cout<<gcd<<endl;
    }
  }cout<<gcd<<" Is the GCD of "<<num1<<" And "<<num2;
    return 0;
}
