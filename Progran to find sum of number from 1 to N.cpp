#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
//Progran to find sum of number from 1 to N
int n;
cout<<"Enter a number: ";
cin>>n;

int i=1;
int sum=0;
while(i<=n){
    sum=sum+i;
    i=i+1;
}
cout<<sum<<endl;
return 0;
}
