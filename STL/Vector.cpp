#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v;
    cout<<sizeof v<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    v.push_back(4);
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    v.resize(10);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0; i<v.size(); i++){
         cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<*v.begin()<<endl;
    cout<<*v.begin()+1<<endl;

    cout<<endl;
    cout<<*v.end()<<endl;
    cout<<*v.end()+1<<endl;

    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;

    cout<<endl;
    if(v.empty()){
        cout<<"empty";
    }else{
        cout<<"not empty";
    }

    cout<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i:v){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2);
    for(int i:v){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    //insert(position, value)
    v.insert(v.begin()+1, 8);
    for(int i:v){
        cout<<v[i]<<" ";
    }

    //sort
    sort(v.begin(), v.end());
    cout<<endl;
    //reverse
    reverse(v.begin(), v.end());
    for(int i:v){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reverse(v.begin()+1, v.end()+1);
    for(int i:v){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
};
