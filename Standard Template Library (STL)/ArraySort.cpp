#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter array index ["<<i<<"] element is: ";
        cin>>arr[i];
    }
    //Start to end
    // sort(arr+2, arr+size);
    // sort(arr, arr+4);
    sort(arr, arr+size);
    for(int i=0; i<size; i++){
        cout<<"Sorting array index ["<<i<<"] element is: "<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
