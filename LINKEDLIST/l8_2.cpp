// recursive method to search element
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

bool search(struct node* head,int n)
{
    node*temp = head;
    if(head==NULL)
    return false;

    if(temp->data==n)
    return true;

    return search(head->next,n);

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
    search(head,n)?cout<<"Yes":cout<<"NO";

    return 0;
    
}

