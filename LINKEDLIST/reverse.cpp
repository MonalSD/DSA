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

void rev(int n)
{
    node* temp=head;
    node* temp2=head;
    
    for(int i=0;i<n;i++)
    {
        temp=temp->next;
    }

    while(temp->next!=NULL)
    {
        temp=temp->next;
        temp2=temp2->next;
    }

    cout<<temp2->data<<" ";
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
    cout<<"LIST AFTER REVERSE: "<<endl;
    for(int i=0;i<n;i++)
    {
        rev(i);
    }
    
 
    return 0;

}
    
