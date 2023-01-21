#include<iostream>
#include<vector>

using namespace std;






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
