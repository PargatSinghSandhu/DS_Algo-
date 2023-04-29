#include<iostream>
#include<array>
#include<bits/stdc++.h >

using namespace std;

union_two_array(int arr1[], int arr2[], int n1, int n2)
{
    vector <int> union_arr;
    while(int i<n1 && int j<n2)
    {
        if (arr1[i]<=arr2[j])
        {
            if(union_arr.size()==0||union_arr.push_back()!=arr[i])
            {
                union_arr.push_back(arr[i]);
            }
            else if (arr1[i]=>arr2[j])
            {
                if (union_arr.size()==0||union_arr.push_back()!=arr2[j])
                {
                    union_arr.push_back(arr2[j]);
                }
            }
            else if(i<n1)
            {
                if(union_arr.size()==0||union_arr.push_back()!=arr2[i])
                {
                    union_arr.push_back(arr2[i]);
                }
            }
            else if(j<n2)
            {
                if(union_arr.size()==0||union_arr.push()!=arr2[j] )
                {
                    union_arr.push_back(arr2[j]);
                }
            }
        }
    }
}


int main()
{
    int arr1[]={1,1,2,3,4,5};
    int arr2[]={1,2,3,4,5,6};
    
    int n1 = end(arr1)-begin(arr1);
    int n2 = end(arr2)-begin(arr2);
    
    union_two_array(arr1, arr2, n1, n2);
}
