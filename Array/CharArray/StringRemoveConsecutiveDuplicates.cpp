#include <bits/stdc++.h>

using namespace std;
void removeDuplicate(char arr[]){
    int l=strlen(arr);
        if(l==1 || l==0){
            return;
        }
        int prev=0;
        for(int current=0; current<l; current++){
            if(arr[current] != arr[prev]){
                prev++;
                arr[prev]=arr[current];
            }
        }
        arr[prev+1]='\0';
        return;
    }
int main(){
    char arr[1000];
    cin.getline(arr, 1000);
    removeDuplicate(arr);
    cout<<arr<<" <- now remove duplicate array";
    return 0;
}
