#include<bits/stdc++.h>

using namespace std;

int main(){
    //Upper case to lower case in string
    string s;
    getline(cin, s);
    cout<<'a'-'A'<<endl;

    for(int i=0; i<=s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] += 32;
        }
    }
    cout<<s;
    return 0;
}
