#include<iostream>
#include<stack>

using namespace std;

void insert(stack<int> &s, int item)
{
    if (s.size()==0)
    {
        s.push(item);
        return;
    }
    
    insert(s,item);
    
    
    
    
    
}



void reverse(stack<int>s)
{
    if(s.size()==0)
        
    {
        return;
    }
    
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;
}


int main()
{
    
    int arr[]={1,2,3,4,5}, top=-1;
    stack<int>s;
    for(int i=0;i<5;i++)
    {
        top++;
        s.push(arr[i]);
    }

    reverse(s);

}
