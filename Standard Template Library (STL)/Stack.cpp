#include <bits/stdc++.h>
#include <stack>
using namespace std;

 int main(){
    stack<string>s;
    s.push("Dev");
    s.push("Das");
    s.push("Pratap");
    cout<<"Top element-> "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;

    s.pop();
    cout<<"After pop top element: "<<s.top()<<endl;
    cout<<"After pop size of stack: "<<s.size()<<endl;

    s.pop();
    cout<<"After pop top element: "<<s.top()<<endl;
    cout<<"After pop size of stack: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
     return 0;
 }
