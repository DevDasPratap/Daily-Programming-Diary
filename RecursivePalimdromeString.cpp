#include <bits/stdc++.h>

using namespace std;

bool checkPalindrome(string& str, int i, int j){
    cout<<"Call recived for str: "<<str<<endl;

    //Base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }else{
        checkPalindrome(str, i+1, j-1);
    }
}
int main(){
    string s="nitin";
    bool isPalimdrome=checkPalindrome(s, 0, s.length()-1);
    if(isPalimdrome){
        cout<<s<<" is palimdrome";
    }else{
        cout<<s<<" is not paliimdrome";
    }
    return 0;
}
