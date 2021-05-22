//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.
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
  
int arr[10];
for (int i = 1; i <=10; ++i)
{
  cin>>arr[i];
}
for (int j = 10; j>=1; --j)
{
  cout<<arr[j]<<endl;
}

   return 0 ;
}
