#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int size){
    //Base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool remainPart=isSorted(arr+1, size-1);
        return remainPart;
    }
}
int main(){
    int destination[5]={4,5,7,8,9};
    int size=5;

    bool ans=isSorted(destination, size);
    if(ans){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
    return 0;
}
