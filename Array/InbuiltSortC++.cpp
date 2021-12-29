#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<=size; i++){
        cout<<"Enter index ["<<i<<"] element: ";
        cin>>arr[i];
    }
    sort(arr, arr+size);
    for(int i=0; i<=size; i++){
        cout<<"Sorting array index ["<<i<<"] element is: "<<arr[i]<<endl;
    }
    return 0;
}
