// print elements of a linked list in forward and reverse order using recursion
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* insert(struct node* head,int x)
{
    node* temp = new node();
    temp->next=NULL;
    temp->data=x;
    if(head==NULL)
    head=temp;
    else
    {
        node* monal=head;
        while(monal->next!=NULL)
        {
            monal=monal->next;
        }
        monal->next=temp;
    }
    return head;
}

void print(struct node* p)
{
    if(p==NULL)
    {
     return;
    }
    cout<<p->data<<" ";
    print(p->next);
}

void print2(struct node* p)
{
    if(p==NULL)
    return;
    print2(p->next);
    cout<<p->data<<" ";
}
int main()
{
    struct node* head = NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    head=insert(head,5);
    cout<<"Forward Order: ";
    print(head);
    cout<<"\n"<<"reverse order: ";
    print2(head);
    return 0;
}