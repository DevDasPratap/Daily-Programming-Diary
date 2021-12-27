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
    for(int i=0; i<size; i++){
        cout<<"Array index ["<<i<<"] size is: "<<sizeof (arr[i])<<endl;
    }
    return 0;
}
