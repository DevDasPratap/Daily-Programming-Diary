#include <bits/stdc++.h>
using namespace std;

int main(){
    int no;
    cout<<"Enter arr size: ";
    cin>>no;
    int arr[no];
    for(int i=0; i<=no; i++){
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    for(int j=0; j<=no; j++){
        cout<<"Array index "<<j<<" element is: "<<arr[j]<<endl;
    }
    return 0;
}
