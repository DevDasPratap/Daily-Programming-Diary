#include <bits/stdc++.h>

using namespace std;

int power(int a, int b){
    //Base case
    if(a==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //Recurvise
    int ans =power(a, b/2);

    //even
    if(b%2==0){
        return ans*ans;
    }else{
        //odd
        return a*ans*ans;
    };
};
int main(){
    int a, b;
    cin>>a>>b;
    int ans = power(a, b);
    cout<<"Answer is: "<<ans;
    return 0;
}
