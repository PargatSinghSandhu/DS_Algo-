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
    
}
struct Node*top;
struct Node*head=NULL;

void Push_beg(int x)
{
    struct*temp = new Node;
    
    if(top==NULL)
    {
        return;
    }
    temp->data=x;
    temp->next=top;
    temp=top;
    

}



int main()
{
    Push_beg(5);
    Push_beg(3);
    Push_beg(1);
    Push_beg(2);
    
}
