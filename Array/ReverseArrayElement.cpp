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
    int s=0;
    int e=size-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<size; i++){
        cout<<"Array index ["<<i<<"] reverse is: "<<arr[i]<<endl;
    }
    return 0;
}
