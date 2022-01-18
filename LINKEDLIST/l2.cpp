// Inserting Node at Nth position
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

void insert2(int data,int n)
{
    node* temp = head;
    for(int i=0;i<=n-2;i++)
    {
        temp =temp->next;
    }
    node* pranshu = temp->next;
    node* suchay = new node();
    suchay->data = data;
    temp->next = suchay;
    suchay->next = pranshu;    
}

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

void print()
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    head = NULL; //empty list
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
    cout<<"Enter position : ";
    cin>>ne;
    insert2(4,ne);
    print();


}