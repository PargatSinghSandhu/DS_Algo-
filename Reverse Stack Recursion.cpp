#include<iostream>
#include<stack>

using namespace std;

void insert(stack<int> &s, int ele)
{
    
    if(s.size()==0)
    {
        s.push(ele);
        return;
    }
    
    int temp = s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
    return;
    
}



void reverse(stack<int>s)
{
    if(s.size()==1)
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;

    
}

void print(stack<int>s)
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
    
    
    int arr[]={1,2,3,4,5}, top=-1;
    stack<int>s;
    for(int i=0;i<5;i++)
    {
        top++;
        s.push(arr[i]);
    }

    reverse(s);
    print(s);
    return 0;

}
