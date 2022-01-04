#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter index ["<<i<<"] element: ";
        cin>>arr[i];
    }
    for(int start=0; start<size; start++){
        for(int end=start; end<size; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
