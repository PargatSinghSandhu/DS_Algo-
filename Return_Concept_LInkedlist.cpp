#include<iostream>
using namespace std;
struct Node 
{
    int data; 
    struct Node*next; 
};

//struct Node*head;
Node* Insert(Node*head, int x)
{
    Node*temp = new Node;
    temp->data = x;
    temp->next=head;
    head=temp;
    return head;
    
}

void print(Node*head)
{
    
    //Node*temp=head;
    
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}

int main ()
{
   Node*head = NULL;
   int n,x;
   cout<<"Enter the count of Linkedlist";
   cin>>n;
   cout<<"Enter the item";
   for(int i=0;i<n;i++)
   {
       cin>>x;
       head = Insert(head,x);
   }
   
   print(head);
}
