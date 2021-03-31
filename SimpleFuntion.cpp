#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fun(int x){
if(x==0)
    return;
else{
    cout<<"hello"<<" "<<endl;
    fun(x-1);
    cout<<"Hi"<<" "<<endl;
}
}
int main()
{
fun(4);

return 0;
}
