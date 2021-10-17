#include<bits/stdc++.h>  
using namespace std;

int main()  
{
  int n, sum=0;
  cin>>n;
  int orginalN = n;
  while(n>0){
    int lNo=n%10;
    sum+= pow(lNo, 3);
    n=n/10;
  }
  if(sum==orginalN){
    cout<<sum<<" is armstrrong number"<<endl;
  }else{
    cout<<sum<<" not armstrrong number"<<endl;
  }
  return 0;
}
