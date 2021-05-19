Define a program to find out whether a given number is even or odd


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int evenOdd(int a){
    
    if (a%2==0)
    {
        cout<<"Even no";
    }
    else{
        cout<<"Odd no";
    }
}

    int main(){
 
   int a;
   cin>>a;
   cout<<evenOdd(a)<<endl;
   

   return 0 ;
}
