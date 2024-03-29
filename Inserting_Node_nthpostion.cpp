//
//  Inserting_Node_Begining.cpp
//  DSA
//
//  Created by Pargat Singh on 2/15/23.
//

#include <stdio.h>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node*next;
};
struct Node*head;





void Insert(int data, int n)
{
    struct Node*temp1= new Node;
    temp1->data = data;
    temp1->next= NULL;
    
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node*temp2 = head ;
    for(int i = 0 ; i<n-2;i++)
    {
        temp2=temp2->next;
    }
    
    temp1->next=temp2->next;
    temp2->next=temp1;
    
    
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
    head = NULL;
    Insert(2,1);
    Insert(4,2);
    Insert(1,1);
    Insert(5,2);
    Print(head);
    
}
