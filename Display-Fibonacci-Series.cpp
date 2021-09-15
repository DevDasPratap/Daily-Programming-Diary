#include <iostream>
using namespace std;

int main() {
  int num, first=0, second=1, next;
  cout<<"Enter Display Fibonacci Series: ";
  cin>>num;
  cout<<"Your "<<num<<" Display Fibonacci Series: ";
  for(int i=0; i<=num; i++){
    if(i<=1){
      next +=1;
    }else{
      next=first+second;
      first=second;
      second=next;
    }
    cout<<next<<" ";
  }
    return 0;
}
