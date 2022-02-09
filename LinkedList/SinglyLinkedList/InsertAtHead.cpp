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
    insertAtHead(head, 16);
    print(head);

    cout<<endl;
    insertAtHead(head, 19);
    print(head);
    return 0;
}