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
    temp->next = NULL;
    head = temp;
    if(head!=NULL)
    {
        temp->next=head;
        head=temp;
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
   }
   Insert(x);
}
