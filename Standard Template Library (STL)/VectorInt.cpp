#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int>v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<"Vector index no ["<<i<<"] and element is: "<<v[i]<<endl;
    };
}
 int main(){
    vector<int>v;
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;
    for(int i=0; i<size; i++){
        int value;
        printVector(v);
        cout<<"Enter index no ["<<i<<"] enter value: ";
        cin>>value;
        v.push_back(value);
    }
    printVector(v);
     return 0;
 }
