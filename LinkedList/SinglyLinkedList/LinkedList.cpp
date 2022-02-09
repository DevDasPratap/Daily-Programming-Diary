#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    //Constructor
    node(int data){
        this-> data=data;
        this->next=NULL;
    }
};
int main(){
    node* linkList = new node(10);
    cout<<linkList->data<<endl;
    cout<<linkList->next<<endl;
    return 0;
}