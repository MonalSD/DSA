// search an element in linkedlist
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

int Search(int n)
{
    node* temp=head;
    int count =0;
    int flag=0;
    while(head!=NULL)
    {
        count++;
        if(temp->data==n)
        {
            flag=1;
            cout<<"Element Exist."<<endl;
            break;
        }
        else
        {
            temp=temp->next;
        }
    }
    if(flag==0)
    cout<<"Element doesn't exist";
    return count;
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
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    int n;
    cout<<"enter element to be searched"<<endl;
    cin>>n;
    cout<<Search(n);
    
}

