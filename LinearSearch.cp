#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter arr size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){ 
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element you want to search: ";
    cin>>key;
    for(int i=0; i<=size; i++){
        if(arr[i]==key){
            cout<<key<<" Key found in array index ["<<i<<"]"<<endl;
            break;
        }
        if(i==size){
            cout<<key<<" Key not found in array index"<<endl;
        }
    }
    return 0;
}
