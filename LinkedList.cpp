#include<iostream>

using namespace std;

struct Node 
{
    int data;
    struct Node*next;                                                                    // Self-initialization strcuture 
}*first=NULL;                                                                            //Pointer for impmenting a Linked List

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;                                                              //*t = this will help in creating new node *last = this will help in adding new node
    first= new Node;
    first->data = arr[0];                                                             /* data is inserting in data and node's next is pointed to NULL and last variable is set as last */ 
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

void display( struct Node *p)                                   //display of linkedlist
{
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        cout<<p->next<<" "<<endl;
        p=p->next;
        
        
    }
}

void count (struct Node*p1)                                     //Count of linkedlist
{
    int c=0;
    while(p1!=NULL)
    {
        c++;
        p1=p1->next;
    }
    cout<<"Count: "<<c<<endl;
}

void sum(struct Node*p2)                                        //sum of elements of linkedlist
{
    int sum=0;
    while(p2!=NULL)
    {
        sum =sum+p2->data;
        p2=p2->next;
    }
    
    cout<<"Sum: "<<sum;
}

int main()
{
    int arr[]={4,2,6,9,3 };
    
    create(arr,5);
    
    display(first);
    
    count(first);
    
    sum(first);
    
    
    return 0;
}
