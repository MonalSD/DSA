// reverse using new linked list (RECURSION)
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
    temp->next=NULL;
    temp->data=x;
    if(head==NULL)
    head=temp;
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

void reverse(struct node* p)
{
    if(p->next==NULL)
    {
        head=p;
        return ;
    }
    reverse(p->next);
    p->next->next=p;
    p->next=NULL;
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
    cout<<"how many number: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }
    
    cout<<"After reversing: ";
    reverse(head);
    print();

    return 0;

}