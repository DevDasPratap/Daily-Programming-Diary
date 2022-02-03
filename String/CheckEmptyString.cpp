#include<bits/stdc++.h>

using namespace std;

int main(){
    //Check empty string
    string s;
    getline(cin, s);
    cout<<s<<endl;

    s.clear();
    
    if(s.empty()){
        cout<<"String is empty";
    }else{
        cout<<"String is not empty";
    }
    return 0;
}
