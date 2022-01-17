#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1, 2, 4, 5, 7, 8, 9};
    int n=sizeof(arr)/sizeof(int);
    //Search ----> find
    int key;
    cin>>key;
    auto it=find(arr, arr+n, key);
    cout<<it<<endl;
    int index=it-arr;
    cout<<index<<endl;
    if(index==n){
        cout<<key<<" not present";
    }else{
        cout<<key<<" is present";
    }
}
