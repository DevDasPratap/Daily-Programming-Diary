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
    int newArrElement, position;
    cout<<"Enter an new array element: ";
    cin>>newArrElement;
    cout<<"Enter the location where you wish to insert an element: ";
    cin>>position;
    
        for(i=size; i>=position; i--)
        {
            arr[i] = arr[i-1];
        }
        size++;
        arr[position-1] = newArrElement;

    cout<<"The New Array is: "<<endl;
    for(int i=0; i<size; i++){
        cout<<"Array index "<<i<<" element is: "<<arr[i]<<endl;
    }
    return 0;
}
