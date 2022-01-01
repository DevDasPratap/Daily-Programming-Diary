#include <bits/stdc++.h>

using namespace std;

 int main(){
    pair<int, string>p;
    p={10, "DevDas"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, string>p1=p;
    p1.first=5;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, string>&p2=p;
    p2.first=7;
    cout<<p.first<<" "<<p.second<<endl;

    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int, int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={4,5};
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    pair<int, string>pd;
    cout<<"Enter pair int and string: ";
    cin>>pd.first>>pd.second;
    cout<<"Your enter pair is: "<<pd.first<<" "<<pd.second;
     return 0;
 }
