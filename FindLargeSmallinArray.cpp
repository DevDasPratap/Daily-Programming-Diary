#include <bits/stdc++.h>
using namespace std;

int main(){
    int no;
    cout<<"Enter arr size: ";
    cin>>no;
    int arr[no];
    for(int i=0; i<=no; i++){
        cin>>arr[i];
    }
    int large=INT_MIN;
    int small=INT_MAX;
    for(int i=0; i<=no; i++){
        if(arr[i]>large){
            large=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }
    cout<<large<<" is large"<<endl;
    cout<<small<< " is small"<<endl;

    return 0;
}
