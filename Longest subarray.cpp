#include<iostream>
#include<algorithm>
using namespace std;

void longest_subarray(int arr[], int n1, int k)
{
    int len=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=i;j<n1;j++)
        {   
            int sum=0;
            for(int k=i;k<j;k++ )
            {   
                
                sum=sum+arr[k];
                
                if(sum==k)
                    
                    len = max(len, j-i+1);
            }
        }
    }
    cout<<len;
}   

int main()
{
    int k;
    int arr[] = {1,1,1,1,1,1,4,2,3};
    int n1 = end(arr)-begin(arr);
    cout<<"Enter the value of K: ";
    cin>>k;
    longest_subarray(arr, n1, k);
}
