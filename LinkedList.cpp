#include<iostream>

using namespace std;

struct Node 
{
    int data;
    struct Node*next;                                                               // Self-initialization strcuture 
}*first=NULL;                                                                            //Pointer for impmenting a Linked List

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;                                                          //*t = this will help in creating new node *last = this will help in adding new node
    first= new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t = new Node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
    
}

void display( struct Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data;
        p=p->next;
        
    }
}


int main()
{
    int arr[]={4,2,6,9,3};
    
    create(arr,5);
    
    display(first);
    
    
    return 0;
}
