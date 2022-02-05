#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    };
    int max=0;
    max=*max_element(arr, arr+size);
    cout<<"Max: "<<max<<endl;
    int min=0;
    min=*min_element(arr, arr+size);
    cout<<"Min: "<<min<<endl;
    return 0;
};
