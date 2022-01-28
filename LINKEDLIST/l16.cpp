// Remove duplicates from a sorted linked list
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

void duplicate()
{
    node* temp=head;
    node* temp2=head;

    if(temp==NULL)
    return;

    while(temp->next!=NULL)
    {
        if(temp->data== temp->next->data)
        {
            temp2=temp->next->next;
            delete(temp->next);
            temp->next=temp2;
        }

        else
        temp=temp->next;
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
    cout<<"How many numbers?"<<endl;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number: ";
        cin>>x;
        insert(x);
        print();
    }
    duplicate();
    print();
 
    return 0;

}
    
