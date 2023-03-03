
#include <stdio.h>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node*next;
    
};
struct Node*top;
struct Node*head=NULL;

void Push_beg(int x)
{
    //top=head;
    struct Node*temp = new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
    //cout<<top->data;
    
}


void Pop_beg()
{
    struct Node*temp=head;
    if(head==NULL)
    {
        return;
    }
    head=temp->next;
    free(temp);
    
    
}

void Node_beginning(int x)
{
    
    struct Node*temp = new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
    
}

void Print(struct Node*p)
{
    
    if(p==NULL)
    {
       
       return;
    }
    cout<<p->data;
    Print(p->next);
}

int main()
{
    Node_beginning(3);
    Node_beginning(2);
    //Node_beginning(12);
    Push_beg(10);
    Push_beg(11);
    Pop_beg();
    Print(head);
    //Push_beg(1);
    //Push_beg(2);
    
}
