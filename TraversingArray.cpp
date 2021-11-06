#include<bits/stdc++.h>  
using namespace std;

int main(){
//Traversing in array
int num;
cout<<"Enetr element in array: ";
cin>>num;
int age[num];
for(int i=0; i<num; i++){
  cin>>age[i];
}
cout<<"Array elements are: "<<endl;
for(int i=0; i<num; i++){
  cout<<"Element at age [ "<<i<<" ]"<<" is "<<age[i]<<endl;
}
  return 0;
}
