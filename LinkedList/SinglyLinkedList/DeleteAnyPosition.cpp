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
    //Destructor
    ~node(){
        int value=this->data;
        //Memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is for node with data"<<value<<endl;
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
    cout<<endl;
}
void insertAtMiddle(node* &tail, node* &head, int position, int d){
    //Insert at first position
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    //Insert at middle position
    node* temp=head;
    int count=1;
    while (count<position-1)
    {
        temp=temp->next;
        count++;
    };
    //Insert at last/end/tail position
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    };
    node* nodeToInsert=new node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
};
void deleteNode(int position, node* &head){
    //Delete first/start position node
    if(position==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        //Delete any middle position node
        node* curr=head;
        node* prev=NULL;
        int count=1;
        while (count<=position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        
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

    insertAtTail(tail, 16);
    print(head);
    
    insertAtTail(tail, 19);
    print(head);

    insertAtTail(tail, 21);
    print(head);

    //Insert at any middle position 4=position
    insertAtMiddle(tail, head, 4, 22);
    print(head);

    //Insert at first position 1=position
    insertAtMiddle(tail, head, 1, 91);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    deleteNode(1, head);
    print(head);
    
    deleteNode(4, head);
    print(head);
    return 0;
}