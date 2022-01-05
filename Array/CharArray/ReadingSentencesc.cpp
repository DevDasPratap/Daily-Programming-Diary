#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    char arr[size];
    cin.getline(arr, size, '$');
    cout<<arr<<endl;
    return 0;
}
