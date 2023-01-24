

#include<iostream>
#include<stack>

using namespace std;


void del(stack<int>&s, int k)
{
    if(k==1)
    {
        s.pop();
        return;
    }
    int temp= s.top();
    s.pop();
    del(s,k-1);
    s.push(temp);
    
}

stack <int> delmid(stack<int>&s)

{
    if(s.size()==0)
    {
        return s;
    }
    int k=((s.size()/2)+1);
    del(s,k);
    
    return s;
}

void print(stack<int>&s)
{
    
    if(s.empty())
    {
        return;
    }
    int x= s.top();
    s.pop();
    cout<<x;
    print(s);
    s.push(x);
}

int main()
{
    
    int arr[] = {1,2,3,4,5}, top = -1;
    stack<int>s;
    
    for (int i=0;i<5;i++)
    {
        top++;
        s.push(arr[i]);
        
    }
    delmid(s);
    print(s);
    return 0;
    
}



