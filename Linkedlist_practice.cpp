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
    
    Node*temp = new Node();
    //Node*temp1= new Node;
    
    temp->data = 2 ;
    temp->next=NULL;
    A=temp;
    temp= new Node();
    
    temp->data =3;
    temp->next=NULL;

   
    
    Node*temp1=A;
    
    
    while(temp1->next!=NULL)
    {
        
        temp1=temp1->next;
        
        
    }

    temp1->next=temp;
    
    //cout<<temp->data;
    
    while(temp1!=NULL)
    {
        
        cout<<temp1->data;
        temp1=temp1-> next;
        
        
    }
    //cout<<temp1;
   
    return 0;
}
