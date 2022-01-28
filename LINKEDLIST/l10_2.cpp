// // Write a function to get Nth node in a Linked List
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

int nnode(struct node* temp,int n)
{


    if(temp==NULL)
    return -1;

    if(n==1)
    return temp->data;

    return nnode(temp->next,n-1);
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
    int n,x,ne;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number: ";
        cin>>x;
        insert(x);
        print();
    }
    
    cout<<"Enter position: ";
    cin>>ne;
    cout<<"Element at index "<<ne<<" is ";
    cout<<nnode(head,ne);
 
    return 0;
    
}