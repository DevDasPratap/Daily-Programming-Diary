Write a program to print the factorial of a number by defining a function named 'Factorial'.
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0


#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int factorial(int number, int fact=1){
  if (number <0)
  {
    cout<<"Negative number";
  }
  else if (number <=1)
  {
    cout<<number<<"!= "<<fact;
  }
  else{
    for (int count = number; count>=2 ; --count)
    {
      fact=fact * count;
    }
    cout<<number<<"!= "<<fact;
  }

}

int main(){
 #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
  
int number;
cin>>number;
factorial(number);
   return 0 ;
}
