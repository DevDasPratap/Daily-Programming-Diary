#include <bits/stdc++.h>
#include <deque>
using namespace std;

 int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(4);
    d.push_front(5);

    cout<<"Print first index elemet: "<<d.at(1)<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;

    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;
    cout<<"Is empty or not: "<<d.empty()<<endl;

    cout<<"Before erase vector size: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase vector size: "<<d.size()<<endl;

//     for(int i:d){
//         cout<<i<<endl;
//     }
     return 0;
 }
