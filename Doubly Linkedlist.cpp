//
//  Doubly_Linkedlist.cpp
//  DSA
//
//  Created by Pargat Singh on 3/1/23.
//

#include <stdio.h>
#include <iostream>

using namespace std;


struct Node
{
    int data;
    struct Node * next;
    struct Node *prev;
};

struct Node*head;

struct Node*GetNewNode(int x)
{
    struct Node* newNode = new Node;
    
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
}

void Insert(int x)
{
    struct Node*temp=getNewNode(x);
    
    if(head==NULL)
    {
        head=temp;
        return;
    }
    //head->next=NULL;
    //temp->next=head;
    //head=temp;
    head->prev=temp;
    temp->next=head;
    head=temp;
    
    
}

void print(struct Node*p)
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
    Insert(2);
    Insert(3);
    print(head);
}

