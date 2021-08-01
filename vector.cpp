#include <iostream>
#include <vector>
using namespace std;


int main() {
vector<int> v;
cout<<"Size --> "<<v.capacity()<<endl;

//push back by add value in last item
v.push_back(1);
cout<<"Size --> "<<v.capacity()<<endl;

v.push_back(2);
cout<<"Size --> "<<v.capacity()<<endl;

v.push_back(3);
cout<<"Size --> "<<v.capacity()<<endl;
cout<<"Vector Size --> "<<v.size()<<endl;

cout<<"Element at 2nd index: "<<v.at(2)<<endl;

cout<<"Front: "<<v.front()<<endl;
cout<<"Back: "<<v.back()<<endl;

cout<<"Before pop: "<<endl;
for(int i:v){
  cout<<i<<" ";
}
cout<<endl;

//pop back by remove value in last iteml
v.pop_back();
cout<<"Ater pop: "<<endl;
for(int i:v){
  cout<<i<<" ";
}
cout<<endl;

//Clear
cout<<"Before clear size: "<<v.size()<<endl;
v.clear();
cout<<"After clear size: "<<v.size()<<endl;

//intialize vector
vector<int> a(5, 1);
cout<<"Print Vector a: "<<endl;
for(int i:a){
  cout<<i<<" ";
}
cout<<endl;

//Copy Vector a
vector<int> last(a);
cout<<"Print Copy a in last: "<<endl;
for(int i:last){
  cout<<i<<" ";
}


    return 0;
}
