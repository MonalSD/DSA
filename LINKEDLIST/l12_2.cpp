// Write a function that counts the number of times a given int occurs in a Linked List
//using recursion
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

int frequency =0;

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

int count(struct node* temp,int search)
{
    if(temp==NULL)
    return frequency;

    if(temp->data == search)
    frequency++;

    return count(temp->next,search);
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
    int s;
    cout<<"Enter no. to search: ";
    cin>>s;
    cout<<"Count of "<<s<<" is: "<<count(head,s);
 
    return 0;

}
    
