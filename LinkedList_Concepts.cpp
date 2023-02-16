//
//  LinkedList_Concepts.cpp
//  DSA
//
//  Created by Pargat Singh on 2/16/23.
//

#include <stdio.h>
#include<iostream>

using namespace std;

struct ListNode
{
    int data;
    struct ListNode*next;
};

struct ListNode*head=NULL;

void Linkedlist_Implement()             //
{
    struct ListNode*temp = new ListNode;
    
    temp->data=2;
    temp->next=NULL;
    head=temp;
    
    struct ListNode*temp  = new ListNode;
    temp->data = 3;
    temp->next = NULL;
    
    ListNode*temp1=head;
    
    while(temp!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    
    
}

void Print(struct ListNode*head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data;
    Print(head->next);
}


int main()
{
    Linkedlist_Implement();
    Print();
}
