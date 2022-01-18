// Inserting node at beginning
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head; //global variable

//Insert
void Insert(int x)
{
    node* temp = new node();
    temp->next = NULL;
    temp->data =x;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        temp->next=head;
        head=temp;
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
    head = NULL; //empty list
    cout<<"How many numbers?"<<endl;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number: ";
        cin>>x;
        Insert(x);
        print();
    }
}