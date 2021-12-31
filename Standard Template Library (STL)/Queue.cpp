#include <bits/stdc++.h>
#include <queue>
using namespace std;

 int main(){
    queue<string>q;
    q.push("Dev");
    q.push("Das");
    q.push("Pratap");
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Before pop queue size: "<<q.size()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"After pop queue size: "<<q.size()<<endl;
     return 0;
 }
