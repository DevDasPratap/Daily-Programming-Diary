#include <iostream>
#include<climits>
using namespace std;


int main() {
int n;
cin>>n;
for(int i=2; i<=n-1; i++){
  if(n%i==0){
    cout<<" Not Prime";
    break;
  }
}
cout<<" Prime"<<endl;
    return 0;
}
