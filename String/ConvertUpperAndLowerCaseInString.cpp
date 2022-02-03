#include<bits/stdc++.h>

using namespace std;

int main(){
    //Convert case in string
    string s;
    getline(cin, s);
    //Convert to upper in string
    transform(s.begin(), s.end(), s.begin(), :: toupper);
    cout<<"Upper: "<<s<<endl;
    //Convert to lower in string
    transform(s.begin(), s.end(), s.begin(), :: tolower);
    cout<<"Lower: "<<s<<endl;
    return 0;
}
