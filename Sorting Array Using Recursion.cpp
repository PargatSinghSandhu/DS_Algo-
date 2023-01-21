#include<iostream>
#include<vector>

using namespace std;

void push(vector <int> &v, int temp)
{
    
}

void sort(vector <int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    
    int temp=v[v.size()==1];
    v.push_back();
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
