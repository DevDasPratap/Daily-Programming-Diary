#include <bits/stdc++.h>

using namespace std;


int main(){
    //multiply array
    int arr[10]={0};

    for(int i=0; i<=9; i++){
        cin>>arr[i];
    }

    for(int i=0; i<=9; i++){
        arr[i]=arr[i]*arr[i];
    }

    for(int i=0; i<=9; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}
