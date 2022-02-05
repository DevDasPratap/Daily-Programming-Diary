#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0; i<size; i++){
        cin>>arr[i];
        // if(arr[i]>maxNo){
        //     maxNo=arr[i];
        // }if(arr[i]<minNo){
        //     minNo=arr[i];
        // }
        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo, arr[i]);
    };
    cout<<"Max No: "<<maxNo<<endl;
    cout<<"Min No: "<<minNo<<endl;

    return 0;
};
