#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int *Move_zeroes_to_end( int arr[], int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
        
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        } 
    }
    
    return arr;
}



int main()
{
    int arr[8] = {1,0,2,3,0,0,4,5};
    int *pk=Move_zeroes_to_end(arr, 8);
    
    for(int k=0;k<8;k++)
    {
        cout<<pk[k];
    }
}
