//Initialize and print all elements of a 2D array.



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
  
int array[5][7], i, j;
for (i = 0; i < 2; ++i)
{
  for (j = 0; j < 4; ++j)
  {
    cin>>array[i][j];
  }
}
for (i = 0; i < 2; ++i)
{
  for (j = 0; j < 4; ++j)
  {
    cout<<array[i][j]<<" ";
  }
  cout<<"\n";
}
   return 0 ;
}
