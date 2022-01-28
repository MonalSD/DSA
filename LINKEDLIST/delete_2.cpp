// delete entire linkedlist
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

void insert(int x)
{
    node* temp = new node();
    temp->next = NULL;
    temp->data = x;
    if(head ==NULL)
    {
        head=temp;
    }
    else
    {
        node* monal = head;
        while(monal->next!=NULL)
        {
            monal=monal->next;            
        }
        monal->next=temp;
    }
}

void Delete()
{
    
    while(head!=NULL)
    {
        node* temp=head;
        head=head->next;
        delete(temp);
    }
}

void print()
{
   node* temp = head;
   cout<<"List is: ";
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp = temp->next;
   } 
   cout<<" \n ";
}

int main()
{
    head=NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    int n;
    Delete();
    cout<<"Linked List Deleted."<<endl;
    print();
}
