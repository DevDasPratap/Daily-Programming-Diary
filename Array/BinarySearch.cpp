#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<key<<" found location: "<<mid+1<<" index ["<<mid<<"]";
            break;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
        cout<<key<<" not found in this array";
        break;
    }
}
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
    cout<<"Enter number you want to search: ";
    cin>>key;
    binarySearch(arr, size, key);
    return 0;
}
