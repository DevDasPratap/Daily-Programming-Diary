#include <bits/stdc++.h>
#include <map>
using namespace std;

 int main(){
    map<int, string>m;
    m[5]="Dev";
    m[16]="Das";
    m[10]="Pratap";

    m.insert({1, "Hello"});
    cout<<"Before erase ->"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    };

    cout<<"Present or not: "<<m.count(5)<<endl;

    cout<<"After erase-> "<<endl;
    m.erase(1);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    };
     return 0;
 }
