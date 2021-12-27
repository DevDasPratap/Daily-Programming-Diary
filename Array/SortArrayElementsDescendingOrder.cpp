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
    for(int i=0; i<=size-1; i++){
        for(int j=0; j<=size+1; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
