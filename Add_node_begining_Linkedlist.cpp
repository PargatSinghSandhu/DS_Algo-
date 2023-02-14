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
    Node*temp = new Node;
    temp->data = x;
    temp->next=head;
    head=temp;
    
}

void print()
{
    
    Node*temp=head;
    
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int main ()
{
   head=NULL;
   int n,x;
   cout<<"Enter the count of Linkedlist";
   cin>>n;
   cout<<"Enter the item";
   for(int i=0;i<n;i++)
   {
       cin>>x;
       Insert(x);
   }
   
   print();
}
