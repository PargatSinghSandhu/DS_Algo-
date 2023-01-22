#include<iostream>
#include<vector>

using namespace std;
#define ll long long unsigned int

void push(vector <int> &v, int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
       {
           v.push_back(temp);
           return;
       }
       int val=v[v.size()-1];
       v.pop_back();
       push(v,temp);
       v.push_back(val);
       return;
}

void sort(vector <int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    
    int temp=v[v.size()-1];
    v.pop_back();
    sort(v);
    push(v,temp);
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
    v={2,1,0,5,7};
    sort(v);
    
    for(int j=0;j<array_size;j++)
    {
        cout<<v[j]<<" ";
        
    }
    cout<<endl;
    
    return 0;
    
    
}
