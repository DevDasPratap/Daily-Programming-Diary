#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter index ["<<i<<"] sorting element: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key you want search: ";
    cin>>key;
bool present=binary_search(arr, arr+size, key);
if(present){
    cout<<"Present: "<<key;
}else{
    cout<<"Not present: "<<key;
}
    return 0;
}
