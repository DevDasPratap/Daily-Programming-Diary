#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

 int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(9);

    cout<<"Finding 9-> "<<binary_search(v.begin(), v.end(), 9)<<endl;
    cout<<"Lower bound -> "<<lower_bound(v.begin(), v.end(), 9)-v.begin()<<endl;
    cout<<"Upper bound -> "<<upper_bound(v.begin(), v.end(), 9)-v.begin()<<endl;


    int a=8;
    int b=11;
    cout<<"Max: "<<max(a,b)<<endl;
    cout<<"Min: "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Swap a, b: "<<a<<" "<<b<<endl;


    string ab="abcd";
    reverse(ab.begin(), ab.end());
    cout<<"String reverse: "<<ab<<endl;

    cout<<"Before rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

     return 0;
 }
