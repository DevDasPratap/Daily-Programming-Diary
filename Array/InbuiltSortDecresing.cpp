#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool sortCompare(int a, int b){
    cout<<"Sort comparing ["<<a<<"] and ["<<b<<"]"<<endl;
    return a>b;
}
int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){  
        cout<<"Enter index ["<<i<<"] element: ";
        cin>>arr[i];
    }
    sort(arr, arr+size, sortCompare);
    for(int i=0; i<size; i++){
        cout<<"Sorting array index ["<<i<<"] element is: "<<arr[i]<<endl;
    }
    return 0;
}
