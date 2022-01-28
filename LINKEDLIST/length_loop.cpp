// length of loop
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

void insert(int x)
{
    node* temp=new node();
    node* monal=head;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        while(monal->next!=NULL)
        {
            monal=monal->next;
        }
        monal->next=temp;
    }
}

int length(struct node *n)
{
    int count=1;
    node* temp=n;
    while(temp->next!=n)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int lloop()
{
    node* slow=head;
    node* fast=head;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return length(slow);
        }
    }
    return 0;
}

void print()
{
    node* temp = head;
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
    cout<<"How many numbers: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }
    head->next->next->next->next->next->next = head->next;
    cout<<"length of loop: ";
    cout<<lloop()<<endl;
    return 0;
}