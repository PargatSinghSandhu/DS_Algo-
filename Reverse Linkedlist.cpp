#include<iostream>

struct Node
{
    int data;
    struct Node*next;
}
struct Node*head;

void reverse()
{
    struct Node* current, *prev, *next;
    current=head;
    prev=NULL;
    while(currnt!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
}
