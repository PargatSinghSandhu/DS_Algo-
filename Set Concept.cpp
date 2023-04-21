#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(set <int> s)
{
    for(auto it: s)
    {
        cout<<it;
    }
}


int main()
{
    set <int> st;
    
    st.insert(1);
    st.insert(10);
    st.insert(20);
    st.insert(12);
    
    display(st);
}
