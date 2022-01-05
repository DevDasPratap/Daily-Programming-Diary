#include <bits/stdc++.h>

using namespace std;
bool isPalindrom(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    while (i<j)
    {
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char arr[1000];
    cin.getline(arr, 1000);
    if(isPalindrom(arr)){
        cout<<arr<<" is a palimdrom string";
    }else{
        cout<<arr<<" not a palimdrom string";
    }
    return 0;
}
