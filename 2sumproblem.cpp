#include<iostream>
#include<map>
#include<vector>

using namespace std;

void twoSum(vector<int>& nums, int target)
{
    map<int, int> mymap;

    for(int i =0;i<nums.size();i++)
    {
        int first = nums[i];
        int second = target - first;

        if(mymap.find(second)!=mymap.end())
        {
            cout<<mymap[second]<<i;
        }
        else 
        mymap[first]=i;
    }
    

}

int main()
{
    vector <int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    twoSum(nums, 9);
    return 0;
}
