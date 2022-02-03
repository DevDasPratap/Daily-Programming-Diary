#include<bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2;
    cin>>num1>>num2;
    char oparetor;
    cin>>oparetor;
    switch (oparetor)
    {
    case '+':
        cout<<"Num1 + num2 sum = "<<num1+num2;
        break;
    case '-':
        cout<<"Num1 + num2 minus = "<<num1-num2;
        break;
    case '*':
        cout<<"Num1 + num2 multiply = "<<num1*num2;
        break;
    case '/':
        cout<<"Num1 + num2 devide = "<<num1/num2;
        break;
    case '%':
        cout<<"Num1 + num2 module = "<<num1%num2;
        break;
    default: cout<<"This oparetor can't define";
        break;
    }
    return 0;
}
