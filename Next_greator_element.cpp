#include<iostream>
#include<vector>

using namespace std;
 
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
 {

        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    for(int k=j+1;k<=m;k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            ans.push_back(nums2[k]);
                            break;
                        }
                        else if(k==m)
                        {
                            ans.push_back(-1);
                            break;
                        }
                    }
                }
                
            }
            
        }
        
        for(int v=0;v<ans.size();v++)
        {
            cout<<ans[v];
        }
        return ans;

    }   

    int main()
    {
        vector <int> nums1;

        nums1.push_back(2);
        nums1.push_back(4);
        //nums1.push_back(2);


        vector <int> nums2;
        nums2.push_back(1);
        nums2.push_back(2);
        nums2.push_back(3);
        nums2.push_back(4);

        nextGreaterElement(nums1,nums2);
        return 0;
    }
