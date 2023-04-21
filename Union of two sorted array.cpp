#include<iostream>
#include<bits/stdc++.h>
#include<array>

using namespace std;

void union_two_array(int arr1[ ], int arr2[ ],int n1,int n2)
{
    
    set <int> s;
    
    for(int i=0;i<n1;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        s.insert(arr2[i]);
    }
    vector<int>temp;
    for(auto it:s)
    {
        temp.push_back(it);
    }
    for(int j=0;j<temp.size();j++)
    {
        cout<<temp[j];
    }
    
}


int main()
{
    int arr1[] = {1,1,2,3,4,5};
    int arr2[]= {1,2,3,4,5,6};
    
    int n1= end(arr1)-begin(arr1);
    int n2= end(arr2)-begin(arr2);
    
    
    
    union_two_array(arr1, arr2,n1,n2);
}
