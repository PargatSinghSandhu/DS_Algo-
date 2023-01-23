#include<iostream>

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

