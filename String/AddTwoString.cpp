#include<bits/stdc++.h>

using namespace std;

int main(){
    //(Apped) add two string
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1+s2<<endl;
    s1.append(s2);
    cout<<s1<<endl;
    return 0;
}
