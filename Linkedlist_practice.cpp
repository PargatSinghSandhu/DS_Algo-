#include<iostream>

using namespace std;
struct Node
{
    int data;
    Node*next;
};

int main()
{
    Node* A;
    A = NULL;
    
    Node*temp = new Node;
    Node*temp1= new Node;
    
    temp->data = 2 ;
    temp->next=NULL;
    A=temp;
    cout<<temp->data;
    
    temp1->data =3;
    temp1->next=NULL;
    A=temp1;
    
    cout<<temp1->data;
    
    
    
    
    while(temp->next!=NULL)
    {
        cout<<"1";
    }
    return 0;
}
