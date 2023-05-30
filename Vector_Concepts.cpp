#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums={1,2,3,4,5,6};
    int n = nums.size();
    vector<int> nums1(n,1);  
    
    for(auto item : nums1)
    {
        cout<<item;
    }
 
    return 0;
}


