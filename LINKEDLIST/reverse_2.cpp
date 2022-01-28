// reverse using new linked list

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
    node* monal=head;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else{
        while(monal->next!=NULL)
        {
            monal=monal->next;
        }
        monal->next=temp;
    }
}

void reverse()
{
    node* current =head;
    node* prev=NULL;
    node* next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

void print()
{
    node* temp=head;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int main()
{
    head=NULL;
    int n,x;
    cout<<"Enter Number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }
    cout<<"List after reversing: ";
    reverse();
    print();
    return 0;
}
