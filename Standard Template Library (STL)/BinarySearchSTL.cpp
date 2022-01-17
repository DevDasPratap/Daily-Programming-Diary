#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1, 2, 4, 5, 7, 8, 9};
    int n=sizeof(arr)/sizeof(int);
    //BinarySearch ----> find
    int key;
    cin>>key;
    bool present=binary_search(arr, arr+n, key);
    if(present){
        cout<<key<<" present";
    }else{
        cout<<key<<" not present";
    }
}
