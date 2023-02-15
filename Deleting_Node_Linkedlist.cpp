//
//  Deleting_Node_Linkedlist.cpp
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

void Delete(int n)
{
    struct Node*temp1=head;
    
    
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    struct Node*temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
    
    
}

int main()
{
    head=NULL;
}
