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
void insertAtHead(node* &head, int d){
    //create new node
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(node* &tail, int d){
    //Insert at tail/end
    node* temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(node* &head){
    node* temp=head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    node* linkList = new node(10);
    // cout<<linkList->data<<endl;
    // cout<<linkList->next<<endl;

    //head point to node1(linkList)
    node* head=linkList;
    node* tail=linkList;
    print(head);
    cout<<endl;

    insertAtTail(tail, 16);
    print(head);
    cout<<endl;
    
    insertAtTail(tail, 19);
    print(head);
    return 0;
}