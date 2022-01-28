//Nth node from the end of a Linked List
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

void last(int n)
{
    node*ref = head;
    node* main= head;

    if (head == NULL) {
            cout << "List is empty" << endl;
            return;
    }

     for (int i = 1; i < n; i++) {
            ref = ref->next;
            if (ref == NULL) {
                cout << n
                     << " is greater than no. of nodes in "
                        "the list"
                     << endl;
                return;
            }
        }




    while(ref->next!=NULL)
    {
        ref=ref->next;
        main=main->next;
    }
    cout<<"Node no. "<<n<<" from end is "<<main->data<<endl;

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
    for(int i=1;i<6;i++)
    {
        last(i);
    }
 
    return 0;
    
}