// Write a function that counts the number of times a given int occurs in a Linked List
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

int count(int search)
{
    node* temp = head;
    int count =0;

    if(head!=NULL)
    {
        while(temp!=NULL)
        {
            if(temp->data == search)
            count++;
            temp=temp->next;
        }
        
        return count;
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
    int n,x,ne;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number: ";
        cin>>x;
        insert(x);
        print();
    }
    int s;
    cout<<"Enter no. to search: ";
    cin>>s;
    cout<<"Count of "<<s<<" is: "<<count(s);
 
    return 0;
    
}