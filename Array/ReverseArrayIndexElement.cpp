#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter arr size: ";
    cin>>size;
    int arr[size];
    int i;
    for(i=0; i<size; i++){ 
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    for(int i=(size-1); i>=0; i--){
        cout<<"Array index ["<<i<<"] reverse is: "<<arr[i]<<endl;
    }
    return 0;
}
