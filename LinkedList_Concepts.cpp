//
//  LinkedList_Concepts.cpp
//  DSA
//
//  Created by Pargat Singh on 2/16/23.
//

#include <stdio.h>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

struct Node*head=NULL;

void Linkedlist_Implement()             //
{
    struct Node*temp = new Node;
    
    temp->data=2;
    temp->next=NULL;
    head=temp;
    
    
    struct Node*temp2  = new Node;
    temp2->data = 3;
    temp2->next = NULL;
    
    Node*temp1=head;
    
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
        
    }
    
    temp1->next=temp2;
    
    
}

void Node_beginning(int x)
{
    struct Node*temp = new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
    
    
}



void nthposition(int data,int n)
{
    
    
    
    struct Node*temp = new Node;
    
    temp->data = data;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    Node*temp1=head;
    
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
    
    
    
    
}

void delnth(int n)
{
    
    struct Node*temp = head;
    for(int i=0;i<n-2;i++)
    {
        temp=temp->next;
    }
    struct Node*temp1 = temp->next;
    temp->next=temp1->next;
    free(temp1);
    
    
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

void reverse()
{
    struct Node *temp, *prev,*next;
    temp = head;
    prev=NULL;
    
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        
    }
    head=prev;
}


int main()
{
    Node_beginning(2);
    Node_beginning(3);
    Node_beginning(4);
    //Linkedlist_Implement();
    //nthposition(10,1);
    //delnth(3);
    reverse();
    
    Print(head);
    
}
