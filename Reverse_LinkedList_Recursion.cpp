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
    Struct Node*next;
};



void Print (struct Node*Node p)
{
    if(p==NULL)
    {
        return;
    }
    
    cout<<p->data;
    Print(p->next);
    
}
