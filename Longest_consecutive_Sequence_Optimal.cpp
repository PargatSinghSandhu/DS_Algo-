#include<iostream>
#include<vector>
#include <unordered_set>
#include <set>

using namespace std;

int Longest_con_seq(vector<int> nums)
{
    //int current_count = 0;
    int longest =1 ;
    //int last_smaller = INT_MIN;
    //sort(nums.begin(),nums.end());
    unordered_set<int>st;
    int n=nums.size();
    if(n==0)
        {          
            return 0;
        }

    for(int i=0;i<n;i++)
    {
        st.insert(nums[i]);
    }

    for(auto it : st)
    {
        if(st.find(it-1)==st.end())
        {
            int cnt =1;
            int x =it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest = max (longest,cnt);
        }
    }

    return longest;

}


int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(4);
    int res = Longest_con_seq(nums);
    cout<<res;
}