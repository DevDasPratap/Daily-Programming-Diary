#include <iostream>
using namespace std;


int main() {
char ch;
ch= cin.get();
int x=0;
int y=0;

while(ch!='\n'){
  if(ch=='N' || ch=='n'){
    y++;
  }
  else if(ch=='S' || ch=='s'){
    y--;
  }
  else if(ch=='E' || ch=='e'){
    x++;
  }
  else{
    x--;
  }
  ch=cin.get();
}
cout<<"Final Displacement is "<<x<<" and "<<y<<endl;
    return 0;
}
