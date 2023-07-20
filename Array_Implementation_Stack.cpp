

#include<iostream>
#define MAXSIZE 100
using namespace  std;

int A[MAXSIZE];

int top=-1;

void push(int x)
{
    if(top==MAXSIZE-1)
    {
        cout<<"Stack is overflow";
        return;
    }
    A[++top]=x;
    
}

void pop()
{
   if(top==-1)
   {
       cout<<"Stack is empty";
       return;
   }
   top--;
}

void print()
{
    cout<<"Stack: ";
    for(int i=0;i<=top;i++)
    {
        cout<<A[i];
    }
}

int main()
{
    push(2);
    
    push(3);
    pop();
    print();
    
}
