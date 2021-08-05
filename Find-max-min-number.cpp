#include <iostream>
#include<climits>
using namespace std;


int main() {

  //Max_Min no
int n;
cin>>n;
int min = INT_MAX;
int max = INT_MIN;
int no;
for(int i=0; i<n; i++){
  cin>>no;
  if(no<min){
    min=no;
  }
  if(no>max){
    max=no;
  }
}
cout<<"Max No: "<<max<<endl;
cout<<"Min No: "<<min<<endl;
    return 0;
}
