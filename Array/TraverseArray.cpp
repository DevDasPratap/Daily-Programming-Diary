#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter arr size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<=size; i++){
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    for(int j=0; j<=size; j++){
        cout<<"Array index "<<j<<" element is: "<<arr[j]<<endl;
    }
    return 0;
}
