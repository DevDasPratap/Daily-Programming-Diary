#include <bits/stdc++.h>

using namespace std;

void reachDestination(int start, int destination){

    cout<<"Start for destination step: "<<start<<" destination: "<<destination<<endl;

    //Base case -> Destination
    if(start==destination){
        cout<<"Reach my destination";
        return;
    }
    start++;
    reachDestination(start, destination);
}
int main(){
    int destination=10;
    int start=1;

    reachDestination(start, destination);
    return 0;
}
