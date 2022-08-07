#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor

    Node(int data){
        this -> data = data;
        this -> next =NULL;
    }
};

void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp->next;

    }
}



int main(){
    Node* node1 = new Node(10);
    // cout<<node1-> data<<endl;
    // cout<<node1->next <<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail,12);

    print(tail);

    InsertAtTail(tail,15);
    print(tail);

    return 0;
}