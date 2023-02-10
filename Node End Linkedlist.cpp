#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

struct Node*head;

void Insert(int x)
{
    Node*temp1 = new Node;
    temp1->data=x;
    temp1->next=NULL;
    if(head==NULL)
    {
        head=temp1;
    }    
    else if(head!=NULL)
    {
        Node*temp2=head;
        while(temp2!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp1;
        
    }
   
   
    
    
}

void Print()
{
    Node*temp3=head;
    if(temp3!=NULL)
    {
        cout<<temp3->data;
        temp3=temp3->next;
    }
    cout<<temp3->data;
    
}
int main()
{
    head=NULL;
    //struct Node*temp1;
    int n,x;
    cout<<"Enter the count of Linked List";
    cin>>n;
    cout<<"Enter the Linked List";
    for(int i = 0 ; i < n;i++)
    {
        cin>>x;
        Insert(x);
        Print();
    }
    
}
