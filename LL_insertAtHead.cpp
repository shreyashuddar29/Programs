#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){              //Constructor
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL)
        temp = temp -> next;
    temp -> next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n -> next = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
}