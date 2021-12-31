#include <bits/stdc++.h>
#include <list>
using namespace std;

 int main(){
    list<int>l;
    l.push_back(1);
    l.push_front(2);

    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i;
    }cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;

    // l.push_back(4);
    // l.push_front(5);

    // for(int i: l){
    //     cout<<i<<" ";
    // }cout<<endl;

    // l.pop_front();
    // l.pop_back();
    // for(int j: l){
    //     cout<<j<<" ";
    // }cout<<endl;

    // cout<<"Size of list: "<<l.size()<<endl;
     return 0;
 }
