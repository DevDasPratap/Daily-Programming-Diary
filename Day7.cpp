#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int row, column;
cin>>row>>column;
  for(int a=1; a<=row; a=a+1){
    for(int b=1; b<=column; b=b+1){
      cout<<"*";
    }
    cout<<endl;
  }



system("pause");

return 0;
}
