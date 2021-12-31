#include <bits/stdc++.h>
#include <set>
using namespace std;

 int main(){
     set<int>s;
     s.insert(2);
     s.insert(2);
     s.insert(2);
     s.insert(2);
     s.insert(1);
     s.insert(0);
     s.insert(0);

     for(int i:s){
         cout<<i<<" ";
     }cout<<endl;

     s.erase(s.begin());

     for(int i:s){
         cout<<i<<" ";
     }cout<<endl; 

     cout<<"Is element present: "<<s.count(2);

     return 0;
 }
