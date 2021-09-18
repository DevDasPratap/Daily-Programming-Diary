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


//Calculate Power of a Numberwithout using inbuilt pow()


#include <iostream>

using namespace std;

int main() {
  int base, exponent, result=1;
  cout<<"Enter numbers: ";
  cin>>base>>exponent;
  cout<<base<<exponent;
  while(exponent > 0){
    result *= base;
    --exponent;
  }
  cout<<result;  
    return 0;
}
