
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
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<" is smalest number in array"<<endl;
    cout<<max<<" is largest number in array"<<endl;
    return 0;
}
