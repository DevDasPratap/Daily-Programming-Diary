#include <bits/stdc++.h>
using namespace std;

//Bubble sort in ascending order c++
int main(){
    int size;
    cout<<"Enter arr size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){ 
        cout<<"Enter array element: ";
        cin>>arr[i];
    } 
    int count=1;
    while(count<size){
        for(int i=0; i<size-count; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
