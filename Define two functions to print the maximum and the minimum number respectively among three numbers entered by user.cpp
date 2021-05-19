Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
  
  #include<bits/stdc++.h>
#include<iostream>

using namespace std;

int maxNum(int first, int second, int third){
    
 int max = first;
 if (second > max){
  max = second;
}
 if (third > max){
    max = third;
}
return max;

    
}
int minNum(int first, int second, int third){
    int min = first;
    if (second < min) {
        min = second;
    }
     if (third < min) {
        min = third;
    }   return min;
}

    int main(){
 
   int a, b, c;
   cin>>a>>b>>c;
   cout<<"Max num is: "<<maxNum(a,b,c)<<endl;
   cout<<"Min num is :"<<minNum(a,b,c)<<endl;

   return 0 ;
}
