#include<iostream>
#include<stack>

using namespace std;


void del()
{
    if(k==1)
    {
        s.pop();
        return;
    }
    int temp= s.top();
    s.pop();
    del(s,k-1);
    s.push(temp)
    
}
int main()
{
    int arr[] = {1,2,3,4,5}, s[5], top = -1;
    
    for (int i=0;i<5;i++)
    {
        top++;
        s[top]=arr[i];
        
    }
    if(s.size()==0)
    {
        return s;
    }
    int k=((s.size()/2)+1);
    del(s,k);
    return s;
    
}
