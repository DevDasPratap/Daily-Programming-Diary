#include <iostream>
using namespace std;

int main() {
  int num, revNum = 0, reminder;
  cout<<"Enter integer number: ";
  cin>>num;
  while(num>0){
    reminder=num%10;
    cout<<reminder<<" ";
    num=num/10;
  }
  
    return 0;
}
