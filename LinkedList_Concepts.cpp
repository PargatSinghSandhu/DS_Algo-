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
    Linkedlist_Implement();
    Print(head);
}
