#include<iostream>
#include<vector>


using namespace std;

int Longest_con_seq(vector<int> nums)
{
    int current_count = 0;
    int longest =1 ;
    int last_smaller = INT_MIN;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    if(n==0)
        {          
            return 0;
        }
    for(int i=0;i<n;i++)
    {
        if(nums[i]-1==last_smaller)
        {
            current_count++;
            last_smaller=nums[i];
        }
        else if (nums[i]!=last_smaller)
        {
            current_count=1;
            last_smaller=nums[i];
        }
        
        longest = max(longest,current_count);

    }

    return longest;

}


int main()
{
    vector<int> nums;
    nums.push_back(100);
    nums.push_back(4);
    nums.push_back(200);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    int res = Longest_con_seq(nums);
    cout<<res;
}