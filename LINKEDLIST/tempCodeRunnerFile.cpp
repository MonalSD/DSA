// print elements of a linked list in forward and reverse order using recursion
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

void insert(struct node* head,int x)
{
    node* temp = new node();
    node* monal=head;
    temp->next=NULL;
    temp->data=x;
    if(head==NULL||head->next==NULL)
    head=temp;
    else
    {
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
    return;
    cout<<p->data;
    print(p->next);
}

int main()
{
    struct node* head=NULL;
    head=insert(2);
    head=insert(4);
    head=insert(6);
    head=insert(5);
    print(head);
}