#include<bits/stdc++.h>

using namespace std;

int main(){
    //Convert to upper case in string
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), :: toupper);
    cout<<s<<endl;
    return 0;
}
