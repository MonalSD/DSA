// print middle of a linked list
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

int middle()
{
    node* len = head;

    int count =0;
    while(len!=NULL)
    {
        
        len=len->next;
        count++;
    }
    len = head;
    int c=0;
    while(c<count/2)
    {
        len=len->next;
        c++;
    }
    return len->data;
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
    
    cout<<"Middle element: "<<middle();
 
    return 0;
    
}