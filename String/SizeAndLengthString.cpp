#include<bits/stdc++.h>

using namespace std;

int main(){
    //Length string
    string s;
    getline(cin, s);
    cout<<"Size/Length of String: "<<s.size()<<endl;

    //More details check length and all chartcher
    for(int i=0; i<=s.length(); i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
