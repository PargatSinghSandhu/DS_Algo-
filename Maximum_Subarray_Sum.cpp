#include<iostream>

using namespace std;


int  subarray_sum(int arr[],int n)
{
    int sum =0;
    int maxi= INT_MIN;

    for(int i=0;i<8;i++)
    {
        
        sum = sum+arr[i];

        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
        
    }
    return maxi;

}

int main()
{
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int n=8;
    int res = subarray_sum(arr, n);
    cout<<res;


    return 0;
}