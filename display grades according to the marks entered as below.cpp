Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail


#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int grade(int number){
  if (number >=91)
  {
    cout<<"AA";
  }
  else if (number >= 81)
  {
    cout<<"AB";
  }
  else if (number >= 71)
  {
    cout<<"BB";
  }
  else if (number >= 61)
  {
    cout<<"BC";
  }
  else if (number >= 51)
  {
    cout<<"CD";
  }
  else if (number >= 41)
  {
    cout<<"DD";
  }
  else if (number >= 0)
  {
    cout<<"Fail";
  }
  else
  {
    cout<<"Invalid Number";
  }

}




    int main(){

   int number;
   cin>>number;
   grade(number);

   return 0 ;
}
