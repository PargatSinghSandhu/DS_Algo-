//
//  Reverse_LinkedList_Recursion.cpp
//  DSA
//
//  Created by Pargat Singh on 2/14/23.
//

#include <stdio.h>
#include<iostream>
using namespace std;


struct Node
{
    int data;
    struct Node*next;
};

struct Node*Insert(Node* head, int data)
{
    Node*temp = new Node;
    temp->data = data;
    temp->next=NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        Node*temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
            
        }
        temp1->next=temp;
    }
    return head;
}



void Reverse (struct Node* p)
{
    if(p->next==NULL)
    {
        head=p;
        return;

    }
    Reverse(p->next);
    Struct Node*q = p->next;
    q->next=p;
    p->next=NULL;
    
    
}



int main()
{
    struct Node*head=NULL;
    head = Insert(head,2);
    head = Insert(head,3);
    head = Insert(head,15);
    head = Insert(head,80);
    head = Insert(head,13);
    Reverse(head);
}

