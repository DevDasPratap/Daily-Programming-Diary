#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int base, exponent, result;
  cout<<"Enter numbers: ";
  cin>>base>>exponent;
  result = pow(base, exponent);
  cout<<result;  
    return 0;
}
