#include<bits/stdc++.h>

using namespace std;

int main(){
    //Erase string
    string s;
    getline(cin, s);
    cout<<s<<endl;

    //Erase between your given number ex(4, 5) 
    s.erase(4, 5);
    cout<<s<<endl;

    //Erase all after your given number
    s.erase(4);
    cout<<s<<endl;
    return 0;
}
