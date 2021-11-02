#include<bits/stdc++.h>  
using namespace std;

int main(){

  //Prime number
  int num, count=0;
  cin>>num;
  for(int i=2; i<num/2; i++){
    if(num%i==0){
      count++;
    }
  }
  if(count==0){
    cout<<num<<" Prime number";
    }else{
      cout<<num<<" Not prime number";
  }
  return 0;
}
