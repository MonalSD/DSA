// to delete a linked list at nth position
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

void Delete(int n)
{
    node* temp=head;
    if(n==1)
    {
        head=temp->next;
        delete(temp);
    }
    else{
        node* temp2=head;
      for(int i=2;i<n;i++)
      {
          temp=temp->next;
          temp2=temp->next;
      }
      node* temp3 = temp2->next;
      temp->next=temp3;
      delete(temp2);
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
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    int n;
    cout<<"Enter a position :";
    cin>>n;
    Delete(n);
    print();
}
