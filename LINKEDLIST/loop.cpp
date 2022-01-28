// detect loop
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

void insert(int x)
{
    node* temp= new node();
    node* monal=head;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else{
        while(monal->next!=NULL)
        {
            monal=monal->next;
        }
        monal->next=temp;
    }
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

int loop()
{
    node* slow=head;
    node* fast=head;

    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return 1;
    }
    return 0;
}

int main()
{
    head=NULL;
    cout<<"How many Numbers: ";
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }

    head->next->next->next->next->next = head->next->next;
    
    if(loop())
    cout<<"LOOP FOUND";
    else
    cout<<"NO LOOP";

    return 0;
}