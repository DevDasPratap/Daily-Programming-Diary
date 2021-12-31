#include <bits/stdc++.h>
#include <vector>
using namespace std;

 int main(){
    vector<int>v;
    cout<<"Now Vector capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Now Vector capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Now Vector capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Now Vector capacity -> "<<v.capacity()<<endl;
    cout<<"Vector size -> "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    
    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear vector size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear vector size: "<<v.size()<<endl;

     return 0;
 }
