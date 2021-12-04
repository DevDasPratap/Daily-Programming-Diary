#include <iostream>
#include<math.h>
#include<climits>
using namespace std;



int getMax(int num[], int n){
  int max=INT_MIN;
  for(int i=0; i<=n; i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  return max;
}
int getMin(int num[], int n){
  int min=INT_MAX;
  for(int i=0; i<=n; i++){
    if(num[i]<min){
      min=num[i];
    }
  }
  return min;
}

int main(){
  int size;
  cout<<"Enter size of an array: ";
  cin>>size;
  int num[100];
  for(int i=0; i<=size; i++){
    cin>>num[i];
  }
  cout<<"Get Max: "<<getMax(num, size)<<endl;
  cout<<"Get Min: "<<getMin(num, size)<<endl;
  return 0;
}
