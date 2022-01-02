#include <bits/stdc++.h>

using namespace std;

void printVector(vector<string>v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<"Vector index no ["<<i<<"] and element is: "<<v[i]<<endl;
    };
}
 int main(){
    vector<string>v;
    int size;
    cout<<"Enter string vector size: ";
    cin>>size;
    for(int i=0; i<size; i++){
        string s;
        printVector(v);
        cout<<"Enter string vector index ["<<i<<"] element: ";
        cin>>s;
        v.push_back(s);
    }
    printVector(v);
     return 0;
 }
