//Write a program to find the sum and product of all elements of an array.


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
 #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
  
int sumpro[10], pro=1, sum=0;
for (int i = 0; i < 2; ++i)
{
  cin>>sumpro[i];
}
for (int i = 0; i < 2; ++i)
{
  sum=sum+sumpro[i];
  pro=pro*sumpro[i];
}
cout<<sum<<endl;
cout<<pro<<endl;
   return 0 ;
}
