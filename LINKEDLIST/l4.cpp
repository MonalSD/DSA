// Linked List: To delete a linked list
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
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Delete()
{
    
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
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number: ";
        cin>>x;
        insert(x);
        print();
    }
    Delete();
    print();

}
