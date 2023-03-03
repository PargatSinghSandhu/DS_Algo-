//
//  Linkedlist_Stack.cpp
//  DSA
//
//  Created by Pargat Singh on 3/3/23.
//

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
    struct Node*temp = new Node;
    top=head;
    if(top==NULL)
    {
        return;
    }
    temp->data=x;
    temp->next=top;
    temp=top;
    

}

void Node_beginning(int x)
{
    struct Node*temp = new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
    
    
}

void print(struct *p)
{
    if(head==NULL)
    {
       return; 
    }
    cout<<p->data;
    print(p->next);
}

int main()
{
    Node_beginning(3);
    Node_beginning(2);
    Push_beg(10);
    Push_beg(11);
    print(head);
    //Push_beg(1);
    //Push_beg(2);
    
}
