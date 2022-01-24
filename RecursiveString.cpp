#include <bits/stdc++.h>

using namespace std;

void reverseString(string& str, int i, int j){
    cout<<"Call recived for str: "<<str<<endl;

    //Base case
    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverseString(str, i, j);
}
int main(){
    string s="DevDas";
    reverseString(s, 0, s.length()-1);
    cout<<s;
    return 0;
}
