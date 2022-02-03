#include<bits/stdc++.h>

using namespace std;

int main(){
    //Lower case to upper case in string
    string s;
    getline(cin, s);
    cout<<'a'-'A'<<endl;

    for(int i=0; i<=s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] -= 32;
        }
    }
    cout<<s;
    return 0;
}
