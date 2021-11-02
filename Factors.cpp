#include<bits/stdc++.h>  
using namespace std;

int main(){

  //Factors
  int num;
  cin>>num;
  for(int i=1; i<=num; i++){
    if(num%i==0){
      cout<<i<<endl;
    }
  }
  return 0;
}
