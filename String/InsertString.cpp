#include<bits/stdc++.h>

using namespace std;

int main(){
    //Insert string
    string s;
    getline(cin, s);
    cout<<s<<endl;

    s.insert(4, "Lol");

    cout<<s<<endl;
    return 0;
}
