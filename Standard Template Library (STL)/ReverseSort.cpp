#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cout<<"Enter array index ["<<i<<"] element is: ";
        cin>>arr[i];
    }
    //Start to end
    // reverse(arr.begin()+2, arr.end());
    // reverse(arr.begin(), arr.end()+2);
    reverse(arr.begin(), arr.end());
    for(int i=0; i<size; i++){
        cout<<"Sorting array index ["<<i<<"] element is: "<<arr[i]<<endl;
    }
    return 0;
}
