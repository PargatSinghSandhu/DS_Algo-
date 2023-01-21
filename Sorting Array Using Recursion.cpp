#include<iostream>
#include<vector>

using namespace std;

void push(vector <int> &v, int temp)
{
    if(v.size()==0 ||v[v.size()-1]<=temp)
       {
           v.push_back(temp);
           return;
       }
       int val=v[v.size()-1];
       v.push_back(val);
       push(v,temp);
       v.pop_back(val);
       return;
}

void sort(vector <int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    
    int temp=v[v.size()==1];
    v.push_back(temp);
    sort(v);
    push(v, temp);
    return;
}




int main()
{
    int array_size, item;
    vector<int> v;
    cout<<"Enter the size of array";
    cin>>array_size;
    
    for(int i=0; i<array_size; i++)
    {
        cin>>item;
        v.push_back(item);
        
    }
    
    sort(v);
    
    
    
    return 0;
    
    
}
