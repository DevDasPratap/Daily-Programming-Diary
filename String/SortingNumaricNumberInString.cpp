#include<bits/stdc++.h>

using namespace std;

int main(){
    //Sorting numaric number in string
    string s;
    getline(cin, s);
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}
