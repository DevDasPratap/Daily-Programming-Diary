#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter index ["<<i<<"] element: ";
        cin>>arr[i];
    }
    int currSum=0;
    int maxSum=0;
    for(int start=0; start<size; start++){
        for(int end=start; end<size; end++){
            currSum=0;
            int i;
            for(i=start; i<=end; i++){
                currSum+=arr[i];
            }
            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
    }
    //Print max sum
    cout<<"Max sum is: "<<maxSum;

    return 0;
}
