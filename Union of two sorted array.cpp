#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void union_two_array(int arr1[], int arr2[])
{
    //int *n1= sizeof(arr1);
    //int *n2= sizeof(arr2);
    set <int> s;
    
    
    for(int i=0;i<6;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<6;i++)
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
    int arr1[6] = {1,1,2,3,4,5};
    int arr2[6]= {1,2,3,4,5,6};
    
    union_two_array(arr1, arr2);
}
