#include<bits/stdc++.h>  
using namespace std;

//GCD=Gratest comon divisor or HCF= Heigst comon factor
//LCM = Loest comon division
int main(){

  int num1, num2, x, y, gcd, lcm;
  cin>>num1>>num2;
  x=num1;
  y=num2;
  while(num1 != num2){
    if(num1>num2){
      num1=num1-num2;
    }else{
      num2=num2-num1;
    }
  }
  cout<<"GCD = "<<num2<<endl;

  gcd=num1;
  lcm=(x*4)/gcd;
  cout<<"LCM= "<<lcm<<endl;
  return 0;
}
